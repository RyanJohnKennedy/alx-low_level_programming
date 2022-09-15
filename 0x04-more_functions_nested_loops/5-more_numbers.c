#include "main.h"

/**
 * more_numbers - prints numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	int lines, number;

	line = 0;
	number = 0;

	for (lines = 0; lines < 10; lines++)
	{
		for (number = 0; number < 15; number++)
		{
			_putchar(number + '0');
		}
	}
	putchar('\n');
}
