#include "../inc/store_manager.h"

//AI generated
void *safe_malloc(size_t size)
{
	void *ptr;

	if (NULL == size)
		return ;	
	ptr = malloc(size);
	if (!ptr)
		exit_message("Error: malloc failed\n", -1);
	return (ptr);
}

void input_validation(int *i, int max, int min){
	while (i > max || i < min){
		scanf("%i", i);
		if(i > max || i < min)
			printf("Invalid input, please try again!\n");
	}
}

int get_element_count(t_store *list){
	t_store *temp = list;
	int count = 0;
	while (NULL != temp){
		count++;
		temp = temp->next;
	}
	return count;
}

t_store *get_elemnet_by_index(int index, t_store *start, t_store *end){
	t_store *temp = start;
	int i = 0;
	while (NULL != temp || temp != end){
		if(i == index)
			return temp;
		temp = temp->next;
		i++;
	}
	return NULL;
}

t_store *get_last_store(t_store *store){
	t_store *temp = store;
	while (NULL != temp->next)
		temp = temp->next;
	return temp;
}

//ai generated
void get_store_name(t_store *new_store){
	char *name = NULL;
	printf("Please enter the store name: ");
	while (NULL != store_name_exists(name))
	{
		scanf("%s", name);
		if (NULL != store_name_exists(name))
			printf("Store name already exists, please try again!\n");
	}
	store->name = name;
}

//ai generated
void get_store_id(t_store *new_store){
	long long int id = 0;
	printf("Please enter the store id: ");
	while(id <= 0 && NULL != store_id_exists(id))
	{
		scanf("%lli", id);
		if(id <= 0)
			printf("Invalid id, please try again!\n");
		else if(NULL != store_id_exists(id))
			printf("Id already exists, please try again!\n");
	}
	store->id = id;
}

void get_store_employ(t_store *new_store){
	int employ = 0;
	printf("Please enter the number of employees: ");
	while(employ <= 0)
		scanf("%i", employ);
	store->employ_count = employ;
}

//ai generated
void get_store_state(t_store *new_store){
	bool state;
	printf("Please enter the store state: ");
	scanf("%i", state);
	store->is_active = state;
}

//ai generated
void add_store(t_store *store_new){
	if(NULL == store_new)
		return ;
	if(NULL == store)
		store = store_new;
	else{
		store_new->previous = get_last_store(store);
		get_last_store(store)->next = store_new;
	}
}

void remove_nodle(t_store *rmv_store){
	if(NULL == store)// case main list is empty
		return;
	if(NULL == store->next){ // case element is the only one in the list
		free(store);
		store = NULL;
	}
	else{
		if(NULL != rmv_store->previous)
			rmv_store->previous->next = rmv_store->next;
		if(NULL != rmv_store->next)
			rmv_store->next->previous = rmv_store->previous;
		free(rmv_store);
	}
}

void print_store(t_store *store){
	printf("|___________________________|\n");
	printf("|Store name: %s\|n", store->name);
	printf("|Store id: %lli|\n", store->id);
	printf("|Number of employees: %i|\n", store->employ_count);
	printf("|Store state: %i|\n", store->is_active);
	printf("|___________________________|\n");
}