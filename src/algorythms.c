#include "../inc/store_manager.h"

t_store *store_name_exists(char *name){ // will use binary tree search
	int list_size = get_element_count();
	int i = 0;
	t_store *temp = , start = store;
	while (NULL != temp){
		temp = get_elemnet_by_index(i/2);
		while(list_size >= i){
			if(strcmp(temp->name, name) == 0)
				return temp;
			else if(strcmp(temp->name, name) > 0)
				temp = temp->previous;
			else if(strcmp(temp->name, name) < 0)
				temp = temp->next;
			i++;
		}
	}
	return NULL;
}