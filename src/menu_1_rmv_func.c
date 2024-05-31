#include "../inc/store_manager.h"

int rmv_store_name(){
	char name[100];
	t_store *temp = alphabetic_order();;
	printf("Enter the name of the store you want to remove: ");
	scanf("%s", name);
	system("clear");
	if ((temp = store_name_exists(name)) != NULL){
		print_store(temp);
		remove_nodle(temp);
		printf("Store removed successfully!\n");
	}
	else{
		system("clear");
		printf("Store with name %s does not exist!\n", name);
	}
	sleep(TIME_SET);
	system("clear");
	menu_1_handle();
	return 0;
}

int rmv_store_id(){
	long long int id = 0;
	t_store *temp = id_order();
	printf("Enter the id of the store you want to remove: ");
	while(id <= 0)
		scanf("%lli", &id);
	system("clear");
	if ((temp = store_id_exists(id)) != NULL){
		print_store(temp);
		remove_nodle(temp);
		printf("Store removed successfully!\n");
	}
	else
		printf("Store with name %lli does not exist!\n", id);
	sleep(TIME_SET);
	system("clear");
	menu_1_handle();
	return 0;
}

int remove_active_store(){ // uses linear search
	bool store_removed = false;
	system("clear");
	for(t_store *temp = store; temp != NULL; temp = temp->next){
		if(temp->is_active){
			print_store(temp);
			remove_nodle(temp);
			if(!store_removed)
				store_removed = true;
		}
	}
	if(store_removed)
		printf("All active stores removed successfully!\n"); // maybe print stores removed
	else
		printf("No active stores found!\n");
	sleep(TIME_SET);
	system("clear");
	menu_1_handle();
	return 0;
}

// ai generated based on remove_active_store
int remove_inactive_stores(){ // uses linear search
	bool store_found = false;
	system("clear");
	for(t_store *temp = store; temp != NULL; temp = temp->next){
		if(!temp->is_active){
			remove_nodle(temp);
			if(!store_found)
				store_found = true;
		}
	}
	if(store_found)
		printf("All active stores removed successfully!\n"); // maybe print stores removed
	else
		printf("No active stores found!\n");
	sleep(TIME_SET);
	system("clear");
	menu_1_handle();
	return 0;
}

int rmv_w_less_employ_store(){ // uses linear search
	int employ = 0;
	bool store_removed = false;
	printf("Enter the number of employees: ");
	while(employ <= 0)
		scanf("%i", &employ);
	system("clear");
	for(t_store *temp = employ_count_order_reverse(); temp != NULL; temp = temp->next){
		if(temp->employ_count < employ){
			while(temp != NULL){
				if(NULL != temp->next){
					temp = temp->next;
					remove_nodle(temp->previous);
				}
				else
					remove_nodle(temp);
			}
			store_removed = true;
			break;
		}
	}
	if(store_removed)
		printf("All stores with less than %i employees removed successfully!\n", employ); // maybe print stores removed
	else
		printf("No stores with less than %i employees found!\n", employ);
	sleep(TIME_SET);
	system("clear");
	menu_1_handle();
	return 0;
}

int rmv_w_more_employ_store(){ // uses linear search
	int employ = 0;
	bool store_removed = false;
	printf("Enter the number of employees: ");
	while(employ <= 0)
		scanf("%i", &employ);
	system("clear");
	for(t_store *temp = employ_count_order(); temp != NULL; temp = temp->next){
		if(temp->employ_count > employ){
			while(temp != NULL){
				if(NULL != temp->next){
					temp = temp->next;
					remove_nodle(temp->previous);
				}
				else
					remove_nodle(temp);
			}
			store_removed = true;
			break;
		}
	}
	if(store_removed)
		printf("All stores with more than %i employees removed successfully!\n", employ); // maybe print stores removed
	else
		printf("No stores with more than %i employees found!\n", employ);
	sleep(TIME_SET);
	system("clear");
	menu_1_handle();
	return 0;
}
