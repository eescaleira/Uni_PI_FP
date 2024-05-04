#include "../inc/store_manager.h"

void main_menu_handle(){
	int i = -1;
	print_main_menu();
	input_validation(&i, 5, 0);
	system("clear");
	switch (i){
		case 0:
			if(struct_type == 1)//ver como vou fazer iniciar random
				random_struct_innit();// create func
			else if(struct_type == 2)
				random_struct_innit_array();// create func
			system("clear");
			main_menu_handle();
			break;
		case 1:
			if(struct_type == 1)
				store_innit(); // create func
			else if(struct_type == 2)
				store_innit_array(); // create func
			break;
		case 2:
			menu_1_handle();
			break;
		case 3:
			menu_2_handle();
			break;
		case 4:
			menu_3_handle();
			break;
		case 5:
			exit_message("Program terminated by your command!\nGoodbye!", 0);//change to clean both structs
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
			if(struct_type == 1)
				rmv_store_name();// rmv a store by name if exist
			else if(struct_type == 2)
				rmv_store_name_array();// rmv a store by name if exist
			break;
		case 2:
			if(struct_type == 1)
				rmv_store_id();// rmv a store by name if exist
			else if(struct_type == 2)
				rmv_store_id_array();// rmv a store by name if exist
			break;
		case 3:
			if(struct_type == 1)
				remove_active_store(); // uses linear search
			else if(struct_type == 2)
				remove_active_store_array(); // uses linear search
			break;
		case 4:
			if(struct_type == 1)
				remove_inactive_stores(); // uses linear search
			else if(struct_type == 2)
				remove_inactive_stores_array(); // uses linear search
			break;
		case 5:
			if(struct_type == 1)
				rmv_w_less_employ_store(); // uses linear search
			else if(struct_type == 2)
				rmv_w_less_employ_store_array(); // uses linear search
			break;
		case 6:
			if(struct_type == 1)
				rmv_w_more_employ_store(); // uses linear search
			else if(struct_type == 2)
				rmv_w_more_employ_store_array(); // uses linear search
			break;
		case 7:
			if(struct_type == 1)
				rmv_all_stores();
			else if(struct_type == 2)
				rmv_all_stores_array();
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
			if(struct_type == 1)
				print_all_stores(); // create func
			else if(struct_type == 2)
				print_all_stores_array(); // create func
			break;
		case 2:
			if(struct_type == 1)
				print_alphabetic_order(); 
			else if(struct_type == 2)
				print_alphabetic_order_array(); // create func
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