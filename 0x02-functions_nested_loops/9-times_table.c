#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int row, coloum, product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
}
