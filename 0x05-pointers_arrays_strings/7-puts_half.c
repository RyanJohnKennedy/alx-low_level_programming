#include "main.h"

/**
 * puts_half - prints half of string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int index = 0;

	while (str[index] != '\0')
		index++;

	if (index % 2 == 0)
		index = index / 2;
	else
		index = (index + 1) / 2;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
