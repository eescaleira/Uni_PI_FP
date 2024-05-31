#include "../inc/store_manager.h"

t_store *store_name_exists(char *name){ // uses binary search to check for a string in list of structs
	int list_size = get_element_count(store);
	t_store *end = get_last_store(store), *start = store, *temp = get_element_by_index(list_size/2, start, end);
	if(NULL == name)
		return NULL;
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

t_store *store_id_exists(long long int id){ // uses binary search to check for a id in list of structs
	int list_size = get_element_count(store);
	t_store *end = get_last_store(store), *start = store, *temp = get_element_by_index(list_size/2, start, end);
	if(0 == id)
		return NULL;
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


t_store *id_order()
{
    if (!store) // Verificar se a store está vazia
        return NULL;

    int swapped;
    t_store *aux;
    do
    {
        swapped = 0;
        aux = store;
        while (aux->next != NULL)
        {
            if (aux->id > aux->next->id)
            {
                swap(aux, aux->next);
                swapped = 1;
            }
            else
                aux = aux->next;
        }
    } while (swapped);

    store = find_head(store);
    return store;
}

t_store *id_order_reverse()
{
    if (!store) // Verificar se a store está vazia
        return NULL;

    int swapped;
    t_store *aux;
    do
    {
        swapped = 0;
        aux = store;
        while (aux->next != NULL)
        {
            if (aux->id < aux->next->id)
            {
                swap(aux, aux->next);
                swapped = 1;
            }
            else
                aux = aux->next;
        }
    } while (swapped);

    store = find_head(store);
    return store;
}

t_store *employ_count_order()
{
    if (!store) // Verificar se a store está vazia
        return NULL;

    int swapped;
    t_store *aux;
    do
    {
        swapped = 0;
        aux = store;
        while (aux->next != NULL)
        {
            if (aux->employ_count < aux->next->employ_count)
            {
                swap(aux, aux->next);
                swapped = 1;
            }
            else
            {
                aux = aux->next;
            }
        }
    } while (swapped); // Só vai parar o loop quando não houver trocas

    store = find_head(store); // Verificar a cabeça da lista novamente
    return store;
}

t_store *employ_count_order_reverse()
{
    if (!store) // Verificar se a store está vazia
        return NULL;

    int swapped;
    t_store *aux;
    do
    {
        swapped = 0;
        aux = store;
        while (aux->next != NULL)
        {
            if (aux->employ_count > aux->next->employ_count)
            {
                swap(aux, aux->next);
                swapped = 1;
            }
            else
            {
                aux = aux->next;
            }
        }
    } while (swapped); // Só vai parar o loop quando não houver trocas

    store = find_head(store); // Verificar a cabeça da lista novamente
    return store;
}

t_store *alphabetic_order()
{
    if (!store) // Verificar se a store está vazia
        return NULL; 

    int swapped;
    t_store *aux;
    do
    {
        swapped = 0;
        aux = store;
        while (aux->next != NULL)
        {
            if (strcmp(aux->name, aux->next->name) > 0)
            {
                swap(aux, aux->next);
                swapped = 1;
            }
            else
                aux = aux->next;
        }
    } while (swapped);

    store = find_head(store);
    return store;
}

t_store *alphabetic_order_reverse()
{
    if (!store) // Verificar se a store está vazia
        return NULL; 

    int swapped;
    t_store *aux;
    do
    {
        swapped = 0;
        aux = store;
        while (aux->next != NULL)
        {
            if (strcmp(aux->name, aux->next->name) < 0)
            {
                swap(aux, aux->next);
                swapped = 1;
            }
            else
                aux = aux->next;
        }
    } while (swapped);

    store = find_head(store);
    return store;
}
