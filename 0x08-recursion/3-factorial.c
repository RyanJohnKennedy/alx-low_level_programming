#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integer
 * Return: integer
 */

int factorial(int n)
{
	int i;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	i = factorial(n - 1);
	return (n * i);
}
