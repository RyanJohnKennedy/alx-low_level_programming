#include "main.h"

/**
 * is_prime_number - checks if input is a prime number
 * @n: integer
 * Return: integer
 */

int is_prime_number(int n)
{
	int i = n / 2;

	if (n <= 1)
		return (0);
	return (checkPrime(n, i));
}

/**
 * checkPrime - checks if number is prime
 * @n: integer
 * @i: integer
 * Return: integer
 */

int checkPrime(int n, int i)
{
	if (i <= 1)
		return (1);
	else if (n % i == 0)
		return (0);
	return (checkprime(n, i - 1));
}
