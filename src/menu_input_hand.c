#include "../inc/store_manager.h"

void main_menu_handle(){
	int i = -1;
	print_main_menu();
	input_validation(&i, 5, 0);
	switch (i){
		case 0:
			random_struct_innit();// create func
			system("clear");
			main_menu_handle();
			break;
		case 1:
			store_innit(); // create func
			break;
		case 2:
			system("clear");
			menu_1_handle();
			break;
		case 3:
			system("clear");
			menu_2_handle(); // create func
			break;
		case 4:
			system("clear");
			menu_3_handle(); // create func
			break;
		case 5:
			system("clear");
			exit_message("Program terminated by your command!\nGoodbye!", 0);
			break;
		default:
			break;
	}
}

void menu_1_handle(){ // create func
	int i = -1;
	print_menu_1();
	input_validation(&i, 6, 1);// define limits
	switch (i){
		case 1:
			//ordenar por ordem alfabetica
			rmv_store_name(); // create func
			break;
		case 2:
			// ordenar por id
			rmv_store_id(); // create func
			break;
		case 3:
			remove_active_store(); // create func
			break;
		case 4:
			print_inactive_stores(); // create func
			break;
		case 5:
			rmv_w_less_employ_store(); // create func
			break;
		case 6:
			rmv_w_more_employ_store(); // create func
			break;
		case 7:
			rmv_all_stores();
			break;
		case 8:
			system("clear");
			main_menu_handle();
			break;
		default:
			break;
	}
}

void menu_2_handle(){
	int i = -1;
	print_menu_2();
	input_validation(&i, 6, 1);
	switch (i){
		case 1:
			print_all_stores(); // create func
			break;
		case 2:
			print_alphabetic_order(); // create func
			break;
		case 3:
			print_reverse_alphabetic(); // create func
			break;
		case 4:
			print_by_employ_count_descendent(); // create func
			break;
		case 5:
			print_by_employ_count_ascendent(); // create func
			break;
		case 6:
			system("clear");
			main_menu_handle();
		default:
			break;
	}
}

void menu_3_handle(){
	int i = -1;
	print_menu_3();
	input_validation(&i, 6, 1);
	switch (i){
		case 1:
			print_store_by_name(); // create func
			break;
		case 2:
			print_store_by_id(); // create func
			break;
		case 3:
			print_active_stores(); // create func
			break;
		case 4:
			print_inactive_stores(); // create func
			break;
		case 5:
			print_by_employ_count_less(); // create func
			break;
		case 6:
			print_by_employ_count_more(); // create func
			break;
		case 7:
			system("clear");
			main_menu_handle();
		default:
			break;
	}
}