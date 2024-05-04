#include "../inc/store_manager.h"

void print_all_stores(){
	if(NULL == store)
	{
		printf("No stores to print!\n");
		return;
	}
	for (t_store *temp = store; temp != NULL; temp = temp->next)
		print_store(temp);
}

void print_alphabetic_order(){
	if(NULL == store)
	{
		printf("No stores to print!\n");
		return;
	}
	for (t_store *temp = alphabetic_order() ; temp != NULL; temp = temp->next)
		print_store(temp);
}

void print_alphabetic_order_reverse(){
	if(NULL == store)
	{
		printf("No stores to print!\n");
		return;
	}
	for (t_store *temp = alphabetic_order_reverse() ; temp != NULL; temp = temp->next)
		print_store(temp);
}

void print_by_employ_count_descendent(){
	if(NULL == store)
	{
		printf("No stores to print!\n");
		return;
	}
	for (t_store *temp = employ_count_order_reverse() ; temp != NULL; temp = temp->next)
		print_store(temp);
}

void print_by_employ_count_ascendent(){
	if(NULL == store)
	{
		printf("No stores to print!\n");
		return;
	}
	for (t_store *temp = employ_count_order() ; temp != NULL; temp = temp->next)
		print_store(temp);
}