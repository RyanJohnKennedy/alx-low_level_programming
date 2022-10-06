#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: int
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	return (memory);
}
