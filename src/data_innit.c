#include "../inc/store_manager.h"

t_store *store_innit(){
	t_store *store_new = safe_malloc(sizeof(t_store));
	get_store_name(store_new);
	get_store_id(store_new);
	get_store_state(store_new);
	get_store_employ(store_new);
	store_new->previous = NULL;
	store_new->next = NULL;
	add_store(store_new);
	return store_new;
}

t_store *new_random_store(){
	t_store *store_new = safe_malloc(sizeof(t_store));
	while(NULL != store_name_exists(store_new->name = mkrndstr(random_number(5, 10)))); // will work?
	while(NULL != store_id_exists(store_new->id = random_number(1, INT_MAX - 10)));  // will work?
	store_new->employ_count = random_number(1,INT_MAX - 10);
	store_new->is_active = random_number(0, 1);
	store_new->next = NULL;
	store_new->previous = NULL;
	return store_new;
}

void random_struct_innit(){
	int n = 0;
	system("clear");
	printf("How many stores do you want to create?\n");
	input_validation(&n, INT_MAX - 10, 1);
	for(int i = 0; i < n; i++)
			add_store(new_random_store());
	system("clar");
	sleep(TIME_SET);
	printf("Store(s) created!\n");
	print_all_stores();
}


void	sotre_innit(){
	t_store *store_new = safe_malloc(sizeof(t_store));
	get_store_name(store);// create func
	get_store_id(store);// create func
	get_store_state(store);	// create func
	get_store_employ(store);// create func
	store_new->next = NULL;
	if(NULL == store)
		store = store_new;
	else{
		store_new->previous = get_last_store(store);
		store->next = store_new;
	}
}

//source: https://stackoverflow.com/questions/822323/how-to-generate-a-random-int-in-c
int random_number(int min_num, int max_num)
{
    int result = 0, low_num = 0, hi_num = 0;

    if (min_num < max_num){
    	low_num = min_num;
    	hi_num = max_num + 1; // include max_num in output
    }
	else {
    	low_num = max_num + 1; // include max_num in output
        hi_num = min_num;
    }

	srand(time(NULL));
	result = (rand() % (hi_num - low_num)) + low_num;
	return result;
}


// source: https://codereview.stackexchange.com/questions/29198/random-string-generator-in-c
char *mkrndstr(size_t length) { // const size_t length, supra

	static char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; // could be const
	char *randomString;

	if (length) {
	    randomString = safe_malloc(length +1); // sizeof(char) == 1, cf. C99

	    if (randomString) {
	        int l = (int) (sizeof(charset) -1); // (static/global, could be const or #define SZ, would be even better)
	        int key;  // one-time instantiation (static/global would be even better)
	        for (int n = 0;n < (int)length;n++) {        
	            key = rand() % l;   // no instantiation, just assignment, no overhead from sizeof
	            randomString[n] = charset[key];
	        }

	        randomString[length] = '\0';
	    }
	}
	return randomString;
}
