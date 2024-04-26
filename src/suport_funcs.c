#include "../inc/philosophers.h"


//AI generated
void *safe_malloc(size_t size)
{
	void *ptr;

	ptr = malloc(size);
	if (!ptr)
	{
		exit_message("Error: malloc failed\n", NULL, -1);
		exit(1);
	}
	return (ptr);
}
void input_validation(int *i, int max, int min){
	while (i > max || i < min){
		scanf("%i", i);
	if(i > max || i < min)
		printf("Invalid input, please try again!\n");
	}
}