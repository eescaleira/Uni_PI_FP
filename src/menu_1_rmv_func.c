#include "../inc/store_manager.h"

int rmv_store_name(){
	char name[100];
	t_store *temp = alphabetic_order();;
	printf("Enter the name of the store you want to remove: ");
	scanf("%s", name);
	system("clear");
	if ((temp = store_name_exists(name)) != NULL){// try to print store before removing and asking if sure
		remove_nodle(temp);
		printf("Store removed successfully!\n");
	}
	else{
		system("clear");
		printf("Store with name %s does not exist!\n", name);
	}
	sleep(3);
	system("clear");
	menu_1_handle();
	return 0;
}

int rmv_store_id(){
	long long int id = 0;
	t_store *temp = id_order();
	printf("Enter the name of the store you want to remove: ");
	while(id <= 0)
		scanf("%lli", id);
	system("clear");
	if ((temp = store_id_exists(id)) != NULL){// try to print store before removing and asking if sure
		remove_nodle(temp);
		printf("Store removed successfully!\n");
	}
	else
		printf("Store with name %lli does not exist!\n", id);
	sleep(3);
	system("clear");
	menu_1_handle();
	return 0;
}

int remove_active_store(){ // uses linear search
	bool store_removed = false;
	system("clear");
	for(t_store *temp = store; temp != NULL; temp = temp->next){
		if(temp->is_active){
			remove_nodle(temp);
			if(!store_removed)
				store_removed = true;
		}
	}
	if(store_removed)
		printf("All active stores removed successfully!\n"); // maybe print stores removed
	else
		printf("No active stores found!\n");
	sleep(3);
	system("clear");
	menu_1_handle();
	return 0;
}

// ai generated based on remove_active_store
int print_inactive_stores(){ // uses linear search
	bool store_found = false;
	system("clear");
	for(t_store *temp = store; temp != NULL; temp = temp->next){
		if(!temp->is_active){
			remove_store(temp);
			if(!store_found)
				store_found = true;
		}
	}
	if(store_found)
		printf("All active stores removed successfully!\n"); // maybe print stores removed
	else
		printf("No active stores found!\n");
	sleep(3);
	system("clear");
	menu_1_handle();
	return 0;
}

int rmv_w_less_employ_store(){ // uses linear search
	t_store *temp = employ_count_order();
	int employ = 0;
	printf("Enter the number of employees: ");
	while(employ <= 0)
		scanf("%i", employ);
	system("clear");
	for(t_store *temp = store; temp != NULL; temp = temp->next){
		if(temp->employ_count < employ){
			remove_nodle(temp);
			if(!store_removed)
				store_removed = true;
		}
	}
	if(store_removed)
		printf("All stores with less than %i employees removed successfully!\n", employ); // maybe print stores removed
	else
		printf("No stores with less than %i employees found!\n", employ);
	sleep(3);
	system("clear");
	menu_1_handle();
	return 0;
}