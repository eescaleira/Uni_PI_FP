#include "../inc/store_manager.h"

void main_menu_handle(){
	int i = -1;
	print_main_menu();
	input_validation(&i, 5, 0);
	switch (i){
		case 0:
			random_struct_innit(); // create func
			break;
		case 1:
			//(); // create func
			break;
		case 2:
			menu_1_handle(); // create func
			break;
		case 3:
			menu_2_handle(); // create func
			break;
		case 4:
			menu_3_handle(); // create func
			break;
		case 5:
			exit_message("Program terminated by your command!\nGoodbye!", 0);
			break;
		default:
			break;
	}
}

void menu_1_handle(){ // create func
	int i = -1;
	print_main_menu();
	input_validation(&i, 5, 0);
	switch (i){
		case 0:
			random_struct_innit(); // create func
			break;
		case 1:
			create_new_store(); // create func
			break;
		case 2:
			remove_store(); // create func
			break;
		case 3:
			print_all_stores(); // create func
			break;
		case 4:
			print_selected_store(); // create func
			break;
		case 5:
			exit_message("Program terminated by your command!\nGoodbye!", 0);
			break;
		default:
			break;
	}
}

void menu_2_handle(){
	int i = -1;
	print_main_menu();
	input_validation(&i, 5, 0);
	switch (i){
		case 0:
			random_struct_innit(); // create func
			break;
		case 1:
			create_new_store(); // create func
			break;
		case 2:
			remove_store(); // create func
			break;
		case 3:
			print_all_stores(); // create func
			break;
		case 4:
			print_selected_store(); // create func
			break;
		case 5:
			exit_message("Program terminated by your command!\nGoodbye!", 0);
			break;
		default:
			break;
	}
}