#include "main.h"

/**
 * print_triangle - print triangle
 * @size: integer
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i = 0;
	int s, a;

	if (size > 0)
	{
		while (i < size)
		{
			for (s = size - 1; s > i; s--)
			{
				_putchar(' ');
			}
			for (a = 0; a < i + 1; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
