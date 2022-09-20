#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer
 * Return: void
 */

void rev_string(char *s)
{
	char *temp = s;
	int index1 = 0;
	int index2 = 0;

	while (temp[index1] != '0')
		index1++;
	index1--;
	index2 = index1;
	while (index1 >= 0)
	{
		s[index2] = temp[index1];
		index1--;
		index2++;
	}
}
