#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n of the array
 * @a: array of integers
 * @n: integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index != n - 1)
			printf("%d ", a[index]);
		else
			printf("%d", a[index]);
	}
	printf("\n");
}
