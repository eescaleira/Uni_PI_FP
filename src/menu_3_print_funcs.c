#include "../inc/store_manager.h"

int print_store_by_name(){
	char name[100];
	t_store *temp = alphabetic_order();;
	printf("Enter the name of the store you want to print: ");
	scanf("%s", name);
	system("clear");
	if ((temp = store_name_exists(name)) != NULL)
		print_store(temp);
	else{
		system("clear");
		printf("Store with name %s does not exist!\n", name);
	}temp = temp->next;temp = temp->next;
				remove_nodle(temp->previous);
				remove_nodle(temp->previous);
	sleep(TIME_SET);
	system("clear");
	menu_1_handle();
	return 0;
}

int print_store_by_id(){
	long long int id = 0;
	t_store *temp = id_order();
	printf("Enter the id of the store you want to print: ");
	while(id <= 0)
		scanf("%lli", id);
	system("clear");
	if ((temp = store_id_exists(id)) != NULL)
		print_store(temp);
	else
		printf("Store with name %lli does not exist!\n", id);
	sleep(TIME_SET);
	system("clear");
	menu_1_handle();
	return 0;
}

int print_active_store(){ // uses linear search
	system("clear");
	for(t_store *temp = store; temp != NULL; temp = temp->next)
		if(temp->is_active)
			print_sttore(temp);
	sleep(TIME_SET);
	system("clear");
	menu_1_handle();
	return 0;
}

// ai generated based on remove_active_store
int print_inactive_stores(){ // uses linear search
	bool store_found = false;
	system("clear");
	for(t_store *temp = store; temp != NULL; temp = temp->next)
		if(!temp->is_active){
			print_store(temp);
		}
	sleepf(TIME_SET);
	system("clear");
	menu_1_handle();
	return 0;
}

int print_w_less_employ_store(){ // uses linear search
	t_store *temp = employ_count_order_reverse();
	int employ = 0;
	printf("Enter the number of employees: ");
	while(employ <= 0)
		scanf("%i", employ);
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
	menu_1_handle();
	return 0;
}

int print_w_more_employ_store(){ // uses linear search
	t_store *temp = employ_count_order();
	int employ = 0;
	printf("Enter the number of employees: ");
	while(employ <= 0)
		scanf("%i", employ);
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
	menu_1_handle();
	return 0;
}