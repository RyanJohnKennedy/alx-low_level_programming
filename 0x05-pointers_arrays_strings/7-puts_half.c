#include "main.h"

/**
 * puts_half - prints half of string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int index = 0;
	int half, max;

	while (str[index] != '\0')
		index++;

	max = index;
	index = max / 2;

	while (index <= max)
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
