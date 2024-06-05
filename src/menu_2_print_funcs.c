#include "../inc/store_manager.h"

void print_all_stores(t_store *store){
	if(NULL == store)
	{
		printf("No stores to print!\n");
		sleep(2);
		return;
	}
	for (t_store *temp = store; temp != NULL; temp = temp->next)
		print_store(temp);
}

void print_alphabetic_order(t_store *store){
	if(NULL == store)
	{
		printf("No stores to print!\n");
		return;
	}
	for (t_store *temp = alphabetic_order(store) ; temp != NULL; temp = temp->next)
		print_store(temp);
}

void print_alphabetic_order_reverse(t_store *store){
	if(NULL == store)
	{
		printf("No stores to print!\n");
		return;
	}
	for (t_store *temp = alphabetic_order_reverse(store) ; temp != NULL; temp = temp->next)
		print_store(temp);
}

void print_by_employ_count_descendent(t_store *store){
	if(NULL == store)
	{
		printf("No stores to print!\n");
		return;
	}
	for (t_store *temp = employ_count_order_reverse(store) ; temp != NULL; temp = temp->next)
		print_store(temp);
}

void print_by_employ_count_ascendent(t_store *store){
	if(NULL == store)
	{
		printf("No stores to print!\n");
		return;
	}
	for (t_store *temp = employ_count_order(store) ; temp != NULL; temp = temp->next)
		print_store(temp);
}