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
	int index, count;

	index = 0;
	count = 1;

	if (n < 0)
		n = 0;

	if (n > 0)
	{
		while (a[index] != '\0' && count < n)
		{
			printf("%d, ", a[index]);
			index++;
			count++;
		}
		printf("%d\n", a[index]);
	}
}
