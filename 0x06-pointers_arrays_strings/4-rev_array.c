#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: integer array
 * @n: integer
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp = 0;
	int index = 0;

	for (index = n - 1; index > n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}
