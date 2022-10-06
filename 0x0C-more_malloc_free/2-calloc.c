#include "main.h"

/**
* _calloc - allocate memory
* @nmemb: int
* @size: int
*Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);

	if (memory != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			memory[i] = 0;
		return (memory);
	}
	else
		return (NULL);
}
