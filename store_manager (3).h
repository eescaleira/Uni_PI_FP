#ifndef STORE_MANAGER_H
#define STORE_MANAGER_H

#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
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

/* random data init */
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

/* support funcs */
void *safe_malloc(size_t size);
void input_validation(int *i, int max, int min);
void get_store_name(t_store *new_store);
void get_store_id(t_store *new_store);
void get_store_employ(t_store *new_store);
void get_store_state(t_store *new_store);

t_store *find_head(t_store *no) // Função auxiliar para verificar a cabeça da lista
{
    while (no && no->previous != NULL)
    {
        no = no->previous;
    }
    return no;
}

void swap(t_store *a, t_store *b) // Função auxiliar para fazer as trocas
{
    t_store *prev_a = a->previous;
    t_store *next_b = b->next;

    if (prev_a)
        prev_a->next = b;
    b->previous = prev_a;
    b->next = a;
    a->previous = b;
    a->next = next_b;
    if (next_b)
        next_b->previous = a;

    // Dar Update na Cabeça do pointer se for nessecario
    if (!b->previous)
        store = b;
}
void exit_message(char *message, int status);

t_store *alphabetic_order();
t_store *alphabetic_order_reverse();
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
            {
                aux = aux->next;
            }
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
            {
                aux = aux->next;
            }
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

#endif
