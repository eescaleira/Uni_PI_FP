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
	int 			employ_count;
	struct s_store	*next;
}		t_store;


/* main function */
int		main();

/* randam data innit */
char *mkrndstr(size_t length);
int random_number(int min_num, int max_num);

/* suport funcs */
void *safe_malloc(size_t size);

#endif