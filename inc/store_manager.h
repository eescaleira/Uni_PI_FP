#ifndef STORE_MANAGER_H
 #define STORE_MANAGER_H

 #include <unistd.h>
 #include <stddef.h>
 #include <stdlib.h>
 #include <string.h>
 #include <limits.h>
 #include <ctype.h>
 #include <stdbool.h>
 #include <stdio.h>
 #include <sys/wait.h>
 #include <sys/types.h>
 #include <time.h>
 #include <fcntl.h>

#define TIME_SET  10

typedef struct s_store{
	struct s_store	*previous;
	char			*name;
	long long int 	id;
	int 			employ_count;
	bool			is_active;
	struct s_store	*next;
}		t_store;

t_store *store = NULL;

/* main function */
int		main();

/* data innit */
void	sotre_innit();
char *mkrndstr(size_t length);
int random_number(int min_num, int max_num);

/* algorythms */
t_store *store_name_exists(char *name); // uses binary tree search to check for a string in list of structs
t_store *store_id_exists(long long int id); // uses binary tree search to check for a id in list of structs

/* list functions */
void remove_nodle(t_store *store);// create func

/* menu handle */
void main_menu_handle();
void menu_1_handle();
void menu_2_handle();
void menu_3_handle();

/* menu 1 funcs */
int rmv_store_name();
int rmv_store_id();
int remove_active_store(); // uses linear search
int remove_inactive_stores(); // uses linear search
int rmv_w_less_employ_store(); // uses linear search
int rmv_w_more_employ_store(); // uses linear search

/* menu 2 funcs */
void print_all_stores();
void print_alphabetic_order();
void print_alphabetic_order_reverse();
void print_by_employ_count_descendent();
void print_by_employ_count_ascendent();

/* menu 3 funcs */
int print_store_by_name();
int print_store_by_id();
int print_active_store(); // uses linear search
int print_inactive_stores(); // uses linear search
int print_w_less_employ_store(); // uses linear search
int print_w_more_employ_store(); // uses linear search

/* menu prints */
void print_main_menu();
void print_menu_1();
void print_menu_2();
void print_menu_3();

/* suport funcs */
void *safe_malloc(size_t size);
void input_validation(int *i, int max, int min);
int get_element_count(t_store *list);
t_store *get_element_by_index(int index, t_store *start, t_store *end);
t_store *get_last_store(t_store *store);
void get_store_name(t_store *new_store);
void get_store_id(t_store *new_store);
void get_store_employ(t_store *new_store);
void get_store_state(t_store *new_store);
void print_store(t_store *store);

/* exit funcs */
void exit_message(char *message, int status);

t_store *alphabetic_order();
t_store *alphabetic_order_reverse();
t_store *id_order();
t_store *employ_count_order();
t_store *employ_count_order_reverse();

#endif