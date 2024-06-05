#include "../inc/store_manager.h"

void main_menu_handle(t_store *store){
	int i = -1;
	print_main_menu();
	input_validation(&i, 5, 0);
	switch (i){
		case 0:
			random_struct_innit(store);
			break;
		case 1:
			CLEAR;
			store_innit(store);
			break;
		case 2:
			menu_1_handle(store);
			break;
		case 3:
			menu_2_handle(store);
			break;
		case 4:
			menu_3_handle(store);
			break;
		case 5:
			CLEAR_TIMED;
			exit_message(store, "Program terminated by your command!\nGoodbye!", 0);
			break;
		default:
			break;
	}
	CLEAR;
	main_menu_handle(store);
}

void menu_1_handle(t_store *store){ // create func
	int i = -1;
	print_menu_1();
	input_validation(&i, 6, 1);// define limits
	switch (i){
		case 1:
			rmv_store_name(store);// rmv a store by name if exist
			break;
		case 2:
			rmv_store_id(store);// rmv a store by name if exist
			break;
		case 3:
			remove_active_store(store); // uses linear search			
			break;
		case 4:
			remove_inactive_stores(store); // uses linear search
			break;
		case 5:
			rmv_w_less_employ_store(store); // uses linear search
			break;
		case 6:
			rmv_w_more_employ_store(store); // uses linear search
			break;
		case 7:
			// rmv_all_stores(); // create func
			break;
		case 8:
			CLEAR;
			main_menu_handle(store);
			break;
		default:
			break;
	}
}

void menu_2_handle(t_store *store){
	int i = -1;
	print_menu_2();
	input_validation(&i, 6, 1);
	switch (i){
		case 1:
			print_all_stores(store); // create func
			break;
		case 2:
			print_alphabetic_order(store); 
			break;
		case 3:
			print_alphabetic_order_reverse(store); // create func
			break;
		case 4:
			print_by_employ_count_descendent(store); // create func
			break;
		case 5:
			print_by_employ_count_ascendent(store); // create func
			break;
		case 6:
			system("clear");
			main_menu_handle(store);
		default:
			break;
	}
	CLEAR;
	menu_2_handle(store);
}

void menu_3_handle(t_store *store){
	int i = -1;
	print_menu_3();
	input_validation(&i, 6, 1);
	switch (i){
		case 1:
			print_store_by_name(store); // create func
			break;
		case 2:
			print_store_by_id(store); // create func
			break;
		case 3:
			print_active_store(store); // create func
			break;
		case 4:
			print_inactive_stores(store); // create func
			break;
		case 5:
			print_by_employ_count_descendent(store); // create func
			break;
		case 6:
			print_by_employ_count_ascendent(store); // create func
			break;
		case 7:
			system("clear");
			main_menu_handle(store);
		default:
			break;
	}
}