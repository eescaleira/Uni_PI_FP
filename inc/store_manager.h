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

typedef struct s_store{
	struct s_store	*previous;
	char			*name;
	long long int 	id;
	int 			employ_count;
	bool			is_active;
	struct s_store	*next;
}		t_store;

t_store *store;

/* main function */
int		main();

/* randam data innit */
char *mkrndstr(size_t length);
int random_number(int min_num, int max_num);

/* menu prints */
void print_main_menu();

/* suport funcs */
void *safe_malloc(size_t size);
void input_validation(int *i, int max, int min);

/* exit funcs */
void exit_message(char *message, int status);

#endif