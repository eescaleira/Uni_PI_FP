#include "../inc/store_manager.h"

int print_store_by_name(t_store *store){
	char name[100];
	t_store *temp = alphabetic_order(store);
	printf("Enter the name of the store you want to print: ");
	scanf("%s", name);
	system("clear");
	if ((temp = store_name_exists(name, store)) != NULL)
		print_store(temp);
	else{
		system("clear");
		printf("Store with name %s does not exist!\n", name);
	}temp = temp->next;temp = temp->next;
				remove_nodle(temp->previous, store);
				remove_nodle(temp->previous, store);
	sleep(TIME_SET);
	system("clear");
	menu_1_handle(store);
	return 0;
}

int print_store_by_id(t_store *store){
	long long int id = 0;
	t_store *temp = id_order(store);
	printf("Enter the id of the store you want to print: ");
	while(id <= 0)
		scanf("%lli", &id);
	system("clear");
	if ((temp = store_id_exists(id, store)) != NULL)
		print_store(temp);
	else
		printf("Store with name %lli does not exist!\n", id);
	sleep(TIME_SET);
	system("clear");
	menu_1_handle(store);
	return 0;
}

int print_active_store(t_store *store){ // uses linear search
	system("clear");
	for(t_store *temp = store; temp != NULL; temp = temp->next)
		if(temp->is_active)
			print_store(temp);
	sleep(TIME_SET);
	system("clear");
	menu_1_handle(store);
	return 0;
}

// ai generated based on remove_active_store
int print_inactive_stores(t_store *store){ // uses linear search
	system("clear");
	for(t_store *temp = store; temp != NULL; temp = temp->next)
		if(!temp->is_active){
			print_store(temp);
		}
	sleep(TIME_SET);
	system("clear");
	menu_1_handle(store);
	return 0;
}

int print_w_less_employ_store(t_store *store){ // uses linear search
	employ_count_order_reverse(store);
	int employ = 0;
	printf("Enter the number of employees: ");
	while(employ <= 0)
		scanf("%i", &employ);
	system("clear");
	for(t_store *temp = store; temp != NULL; temp = temp->next)
		if(temp->employ_count < employ){
			while(temp != NULL){
				print_store(temp);
				temp = temp->next;
			}
			break;
		}
	sleep(TIME_SET);
	system("clear");
	menu_1_handle(store);
	return 0;
}

int print_w_more_employ_store(t_store *store){ // uses linear search
	employ_count_order(store);
	int employ = 0;
	printf("Enter the number of employees: ");
	while(employ <= 0)
		scanf("%i", &employ);
	system("clear");
	for(t_store *temp = store; temp != NULL; temp = temp->next)
		if(temp->employ_count > employ){
			while(temp != NULL){
				print_store(temp);
				temp = temp->next;
			}
			break;
		}
	sleep(TIME_SET);
	system("clear");
	menu_1_handle(store);
	return 0;
}