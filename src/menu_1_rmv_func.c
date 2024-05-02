#include "../inc/store_manager.h"

// ai generated help
int rmv_store_name(){
	char name[100];
	t_store *temp = NULL;
	printf("Enter the name of the store you want to remove: ");
	scanf("%s", name);
	if ((temp = store_name_exists(name)) != NULL/* criar funcao para escolher algoritmo usado */){// try to print store before removing and asking if sure
		system("clear");
		remove_name(name);
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
// ai generated help
int rmv_store_id(){
	int id;
	t_store *temp = NULL;
	printf("Enter the id of the store you want to remove: ");
	scanf("%di", &id);
	if ((temp = store_id_exists(id)) != NULL/* criar funcao para escolher algoritmo usado */){// try to print store before removing and asking if sure
		system("clear");
		printf("Store removed successfully!\n");
	}
	else{
		system("clear");
		printf("Store with id %d does not exist!\n", id);
	}
	sleep(3);
	system("clear");
	menu_1_handle();
	return 0;
}
