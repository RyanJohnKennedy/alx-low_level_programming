#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int row, column, product, ten, one;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;
			ten = product / 10;
			one = product % 10;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(one + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(ten + '0');
				_putchar(one + '0');
			}
		}
		_putchar('\n');
	}
}
