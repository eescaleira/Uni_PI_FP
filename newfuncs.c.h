#ifndef STORE_MANAGER_H
#define STORE_MANAGER_H

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>

typedef struct s_store
{
	struct s_store *previous;
	char *name;
	long long int id;
	int employ_count;
	bool is_active;
	struct s_store *next;
} t_store;

t_store *store = NULL;

/* main function */
int main();

/* randam data innit */
char *mkrndstr(size_t length);
int random_number(int min_num, int max_num);

/* menu handle */
void main_menu_handle();
void menu_1_handle();
void menu_2_handle();
void menu_3_handle();

/* menu prints */
void print_main_menu();
void print_menu_1();
void print_menu_2();
void print_menu_3();

/* suport funcs */
void *safe_malloc(size_t size);
void input_validation(int *i, int max, int min);
void get_store_name(t_store *new_store);
void get_store_id(t_store *new_store);
void get_store_employ(t_store *new_store);
void get_store_state(t_store *new_store);

void swap(no *a, no *b)
{
	if (a->previous)
		a->previous->next = b;
	if (b->next)
		b->next->previous = a;

	t_store *temp = a->next;
	a->next = b->next;
	b->next = temp;

	temp = a->previous;
	a->previous = b->previous;
	b->previous = temp;
};

/* exit funcs */
void exit_message(char *message, int status);

t_store *alphabetic_order();
t_store *alphabetic_order_reverse();
t_store *id_order() // Bubble Sort para Organizar a Lista
{
	t_store *aux = store;
	do
	{
		int swapped = 0;
		while (aux->next != NULL)
		{
			if (aux->id > aux->next->id)
			{
				swap(aux, aux->next);
				swapped = 1;
			}
			aux = aux->next;
		}
	} while(swapped);
	return store;
}
t_store *employ_count_order()
{
	t_store *aux = store;
	do 
	{
		int swapped = 0 ;
		while (aux->next != NULL)
		{
			if(aux->employ_count < aux->next->employ_count) 
			{
				swap(aux , aux->next);
				swapped = 1 ;
			}
			aux = aux->next;
		}
	} while(swapped);
	return store;
};
t_store *employ_count_order_reverse(){
	t_store *aux = store;
	do 
	{
		int swapped = 0 ;
		while (aux->next != NULL)
		{
			if(aux->employ_count > aux->next->employ_count) 
			{
				swap(aux , aux->next);
				swapped = 1 ;
			}
			aux = aux->next;
		}
	} while(swapped);
	return store;
};

#endif