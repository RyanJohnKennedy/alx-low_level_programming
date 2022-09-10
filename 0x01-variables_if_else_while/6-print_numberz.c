#include <stdio.h>

/**
 * main - print digit numbers
 *
 * Description: print digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
