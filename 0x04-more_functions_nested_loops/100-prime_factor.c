#include <stdio.h>

/**
 * main - print the largest prime
 *
 * Return: Always 0
 */

int main(void)
{
	long int prime = 612852475143;
	long int i = prime;
	long int d = 2;

	while (i != d)
	{
		if (i % d == 0)
			i = i / d;
		else
			d++;
	}

	printf("%li\n", i);

	return (0);
}
