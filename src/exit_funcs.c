#include "../inc/store_manager.h"

void exit_message(char *message, int status){
	if(NULL != store)
	{
		while (NULL != store->next)
		{
			store = store->next;
			free(store->previous->name);
			free(store->previous);
		}
		free(store->name);
		free(store);
	}
	printf("%s\nExit status:%i", message, status);
	exit(status);
}
