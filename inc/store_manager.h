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

#define TIME_SET  4
#define CLEAR system("clear")
#define CLEAR_TIMED	sleep(TIME_SET);CLEAR

typedef struct s_store{
	struct s_store	*previous;
	char			*name;
	long long int 	id;
	int 			employ_count;
	bool			is_active;
	struct s_store	*next;
}		t_store;

/* maybe create func that recive number and print correspondent number */
/* func to clean list */

/* main function */
int		main();


/* data innit */
void	store_innit(t_store *store);													// Done
t_store *new_random_store(t_store *store);
void	random_struct_innit();
char	*mkrndstr(size_t length);
int		random_number(int min_num, int max_num);


/* algorythms */
// uses binary tree search to check for a string in list of structs
t_store *store_name_exists(char *name, t_store *store);									//check especific cases							
 // uses binary tree search to check for a id in list of structs					
t_store *store_id_exists(long long int id, t_store *store);								//check especific cases
t_store *alphabetic_order(t_store *store);												// Done
t_store *alphabetic_order_reverse(t_store *store);
t_store *id_order(t_store *store);
t_store *employ_count_order(t_store *store);
t_store *employ_count_order_reverse(t_store *store);


/* menu handle */
void 	main_menu_handle(t_store *store);												// Check timings de clear
void 	menu_1_handle(t_store *store);
void 	menu_2_handle(t_store *store);
void 	menu_3_handle(t_store *store);


/* menu 1 funcs */
int		rmv_store_name(t_store *store);													// Done
int		rmv_store_id(t_store *store);													// Done
int		remove_active_store(t_store *store); // uses linear search						// Done
int		remove_inactive_stores(t_store *store); // uses linear search					// Done
int		rmv_w_less_employ_store(t_store *store); // uses linear search					// Done
int 	rmv_w_more_employ_store(t_store *store); // uses linear search					// Done


/* menu 2 funcs */
void	print_all_stores(t_store *store);
void	print_alphabetic_order(t_store *store);
void	print_alphabetic_order_reverse(t_store *store);
void	print_by_employ_count_descendent(t_store *store);
void	print_by_employ_count_ascendent(t_store *store);


/* menu 3 funcs */
int		print_store_by_name(t_store *store);
int		print_store_by_id(t_store *store);
int		print_active_store(t_store *store); // uses linear search
int		print_inactive_stores(t_store *store); // uses linear search
int		print_w_less_employ_store(t_store *store); // uses linear search
int		print_w_more_employ_store(t_store *store); // uses linear search


/* print funcs */
void	print_main_menu();																// Done
void	print_menu_1();																	// Done
void	print_menu_2();																	// Done
void	print_menu_3();																	// Done
void 	print_store(t_store *store);													// Done	


/* input handle */
void 	input_validation(int *i, int max, int min);										// Done
void 	get_store_name(t_store *new_store, t_store *store);												// Done
void 	get_store_id(t_store *new_store, t_store *store);												// Done
void 	get_store_employ(t_store *new_store);											// Done
void 	get_store_state(t_store *new_store);											// Done


/* list functions */
void 	add_store(t_store *store_new, t_store *store);
void 	remove_nodle(t_store *rmv_store, t_store *store);// create func					// if rmv_store = store , store = store->next
void	swap(t_store *a, t_store *b, t_store *store);									// CHECK 1 more time in case
t_store *find_head(t_store *no); // Função auxiliar para verificar a cabeça da lista	// Done
t_store *get_element_by_index(int index, t_store *start, t_store *end);
t_store *get_last_store(t_store *store);
int 	get_element_count(t_store *list);


/* suport funcs */
void 	*safe_malloc(size_t size);


/* exit funcs */
void	exit_message(t_store *store, char *message, int status);// case store null


#endif