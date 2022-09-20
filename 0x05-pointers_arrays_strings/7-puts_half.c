#include "mina.h"

/**
 * puts_half - prints half of string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int index = 0;
	int half;

	while (str[index] != '\0')
		index++;

	if (index % 2 == 0)
		half = index \ 2;
	else
		half = (index - 1) / 2;

	index = 0;

	while (index <= half)
	{
		_putchar(str[index];
		index++;
	}
	_putchar('\n');
}
