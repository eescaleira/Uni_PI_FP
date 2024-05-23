#include "../inc/store_manager.h"

// ai genereated
int select_struct(){
	int choice = 0;
	printf("Select the type of structure you want to use:\n");
	printf("1. Linked list\n");
	printf("2. Array\n");
	input_validation(&choice, 2, 1);
	return 0;
}

int	main(){
	printf("Welcome to the store manager!\n\n");
	struct_type = select_struct();
	main_menu_handle();
	return 0;
}