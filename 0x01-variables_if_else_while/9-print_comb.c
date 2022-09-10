#include <stdio.h>

/**
 * main - Print all combination of digit numbers
 *
 * Description: Print all combination of digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(1);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}

	putchar(10);

	return (0);
}
