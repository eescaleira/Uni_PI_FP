#include "../inc/store_manager.h"

//AI generated
void *safe_malloc(size_t size)
{
	void *ptr;

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
	char *name;
	printf("Please enter the store name: ");
	scanf("%s", name);
	store->name = name;
}

//ai generated
void get_store_id(t_store *new_store){
	long long int id = 0;
	printf("Please enter the store id: ");
	while(id <= 0)
		scanf("%lli", id);
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


