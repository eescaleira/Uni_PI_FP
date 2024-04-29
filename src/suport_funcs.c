#include "../inc/store_manager.h"

//AI generated
void *safe_malloc(size_t size)
{
	void *ptr;

	ptr = malloc(size);
	if (!ptr)
		exit_message("Error: malloc failed\n", NULL, -1);
	return (ptr);
}

void input_validation(int *i, int max, int min){
	while (i > max || i < min){
		scanf("%i", i);
		if(i > max || i < min)
			printf("Invalid input, please try again!\n");
	}
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
	long long int id;
	printf("Please enter the store id: ");
	scanf("%lli", id);
	store->id = id;
}

void get_store_employ(t_store *new_store){
	int employ;
	printf("Please enter the number of employees: ");
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


