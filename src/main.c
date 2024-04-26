#include "../inc/store_manager.h"

int main(){

	store = safe_malloc(sizeof(t_store));
	printf("Welcome to the store manager!\n");
	main_menu_handle();
	return 0;
}