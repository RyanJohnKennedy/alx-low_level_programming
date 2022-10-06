#include "main.h"

/**
* array_range - creates an int array
* @min: int
* @max: int
* Return: int
*/

int *array_range(int min, int max)
{
	int *memory;
	int i, j = 0;

	if (min > max)
		return (NULL);
	memory = malloc(sizeof(*memory) * ((max - min) + 1));
	if (memory != NULL)
	{
		for (i = min; i <= max; i++)
		{
			memory[j] = i;
			j++;
		}
		return (memory);
	}
	else
		return (NULL);

}
