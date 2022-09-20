#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer
 * Return: void
 */

void rev_string(char *s)
{
	int index, max, half;
	char first, last;

	index = 0;
	while (s[index] != '\0')
		index++;

	max = index - 1;
	half = max / 2;
	while (half >= 0)
	{
		first = s[max - half];
		last = s[half];
		s[half] = first;
		s[max - half] = last;
		half--;
	}
}
