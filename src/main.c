#include "../inc/store_manager.h"

// ai genereated
int select_struct(){
	int choice = 0;
	printf("Select the type of structure you want to use:\n");
	printf("1. Linked list\n");
	printf("2. Array\n");
	while(choice != 1 && choice != 2){
		scanf("%d", &choice);
		if(choice == 1 || choice == 2)
			return choice;
		else
			printf("Invalid choice! Try again: ");
	}
	return 0;
}

int	main(){
	printf("Welcome to the store manager!\n\n");
	struct_type = select_struct();
	if(struct_type == 1)
		main_menu_handle();
	else if(struct_type == 2)
		main_menu_handle_array();
	return 0;
}