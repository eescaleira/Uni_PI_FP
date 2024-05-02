#include "../inc/store_manager.h"

void print_main_menu(){
	printf("Please select an option:\n");
	printf("1. Add a new store\n");				//innit all steps to struc creation
	printf("2. Remove store(s)\n");				//redirect to menu_1
	printf("3. Print all stores\n");			//redirect to menu_2
	printf("4. Print a selected store(s)\n");	//redirect to menu_3
	printf("5. Exit\n");
}

void print_menu_1(){
	printf("Please select an option:\n");
	printf("1. Remove a store by name\n");
	printf("2. Remove a store by ID\n");
	printf("3. Remove all active stores\n");
	printf("4. Remove all inactive stores\n");
	printf("5. Remove all with less than a number of employees\n");
	printf("6. Remove all with more than a number of employees\n");
	printf("7. Remove all stores\n");
	printf("8. <- Go Back\n"); // redirect to main_menu
}

void print_menu_2(){
	printf("Please select an option:\n");
	printf("1. Default\n");
	printf("2. Alphabetical order\n");
	printf("3. Reverse alphabetical\n");
	printf("4. By employe count(descendent order)\n");
	printf("5. By employe count(ascendent order)\n");
	printf("6. <- Go Back\n"); // redirect to main_menu
}

void print_menu_3(){
	printf("Please select an option:\n");
	printf("1. Print a store by name\n");
	printf("2. Print a store by ID\n");
	printf("3. Print all active stores\n");
	printf("4. Print all inactive stores\n");
	printf("5. Print all with less than a number of employees\n");
	printf("5. Print all with less more a number of employees\n");
	printf("6. Print all stores\n");
	printf("7. <- Go Back\n"); // redirect to main_menu
}

