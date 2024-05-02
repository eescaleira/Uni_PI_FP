#include "../inc/store_manager.h"

t_store *store_name_exists(char *name){ // uses binary tree search to check for a string in list of structs
	int list_size = get_element_count(store);
	t_store *end = get_last_store(store), *start = store, *temp = get_elemnet_by_index(list_size/2, start, end);
	for (int i = 0; NULL != temp; i++){
		if(strcmp(temp->name, name) == 0)// check if string is in the midle of list
			return temp;
		if(start == temp || end == temp)// check when name was not found
			return NULL;
		else if(strcmp(temp->name, name) > 0){// case string to find as higher value than the mid element
			start = temp;
			temp = get_element_by_index(get_element_count(start)/2, start, end);
		}
		else if(strcmp(temp->name, name) < 0){// case string to find as lower value than the mid element
			temp = get_element_by_index(get_element_count(start)/2, start, end);
			end = temp;
		}
	}
	return NULL;
}

t_store *store_id_exists(long long int id){ // uses binary tree search to check for a id in list of structs
	int list_size = get_element_count(store);
	t_store *end = get_last_store(store), *start = store, *temp = get_elemnet_by_index(list_size/2, start, end);
	for (int i = 0; NULL != temp; i++){
		if(temp->id == id)// check if id is in the midle of list
			return temp;
		if(start == temp || end == temp)// check when name was not found
			return NULL;
		else if(temp->id > id){// case string to find as higher value than the mid element
			start = temp;
			temp = get_element_by_index(get_element_count(start)/2, start, end);
		}
		else if(temp->id < id){// case string to find as lower value than the mid element
			temp = get_element_by_index(get_element_count(start)/2, start, end);
			end = temp;
		}
	}
	return NULL;
}
