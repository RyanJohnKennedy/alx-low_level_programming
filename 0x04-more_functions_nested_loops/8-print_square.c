#include "main.h"

/**
 * print_square - draws a square
 * @size: intger
 *
 * Return: void
 */

void print_square(int size)
{
	int width;
	int height;

	if (size > 0)
	{
		for (width = 0; width < size; width++)
		{
			for (height = 0; height < size; height++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
