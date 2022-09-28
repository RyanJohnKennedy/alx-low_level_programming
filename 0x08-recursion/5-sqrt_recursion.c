#include "main.h"

/**
 * _sqrt_recursion - retruns the natural square root of a number
 * @n: integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrtCall(0, n));
}

/**
 * _sqrtCall - returns the square root
 * @i: integer
 * @x: integer
 * Return: integer
 */

int _sqrtCall(int i, int x)
{
	if (i > x / 2)
		return (-1);
	else if (i * i == x)
		return (i);
	return (_sqrtCall(i + 1, x));
}
