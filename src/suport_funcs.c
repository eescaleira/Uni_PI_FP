#include "../inc/philosophers.h"

void *safe_malloc(size_t size)
{
	void *ptr;

	ptr = malloc(size);
	if (!ptr)
	{
		printf("Error: malloc failed\n");
		exit(1);
	}
	return (ptr);
}