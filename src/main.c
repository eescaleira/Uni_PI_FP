#include "../inc/store_manager.h"

void	sotre_innit(){
	t_store *store_new = safe_malloc(sizeof(t_store));
	get_store_name(store);// create func
	get_store_id(store);// create func
	get_store_state(store);	// create func
	get_store_employ(store);// create func
	store_new->next = NULL;
	if(NULL == store)
		store = store_new;
	else{
		store_new->previous = get_last_store(store);
		store->next = store_new;
	}
}

int	main(){
	printf("Welcome to the store manager!\n");
	main_menu_handle();
	return 0;
}