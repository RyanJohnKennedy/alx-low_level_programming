#include "main.h"

/**
 * print_diagonal - draw a line
 * @n: integer
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;
	int s;

	if (n > 0)
	{
		while (i < n)
		{
			for (s = 0; s < i; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
