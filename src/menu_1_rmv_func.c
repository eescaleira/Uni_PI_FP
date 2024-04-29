#include "../inc/store_manager.h"

// ai generated
int rmv_store_name(){
	char name[100];
	printf("Enter the name of the store you want to remove: ");
	scanf("%s", name);
	if (store_name_exists(name)){// try to print store before removing and asking if sure
		system("clear");
		remove_store_by_name(name);
		printf("Store removed successfully!\n");
		system("clear");
		menu_1_handle();
	}
	else{
		system("clear");
		printf("Store with name %s does not exist!\n", name);
		sleep(3);
		system("clear");
		menu_1_handle();		
	}
	return 0;
}
// ai generated
int rmv_store_id(){
	int id;
	printf("Enter the id of the store you want to remove: ");
	scanf("%di", &id);
	if (store_id_exists(id)/* criar funcao para escolher algoritmo usado */){// try to print store before removing and asking if sure
		system("clear");
		remove_store_by_id(id);
		printf("Store removed successfully!\n");
		system("clear");
		menu_1_handle();
	}
	else{
		system("clear");
		printf("Store with id %d does not exist!\n", id);
		sleep(3);
		system("clear");
		menu_1_handle();		
	}
	return 0;
}


