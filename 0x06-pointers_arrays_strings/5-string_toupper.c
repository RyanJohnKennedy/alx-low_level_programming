#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @a: string
 * Return: string
 */

char *string_toupper(char *a)
{
	int index = 0;

	while (a[index])
	{
		if (a[index] >= 'a' && a[index] <= 'z')
			a[index] -= 32;

		index++;
	}

	return (a);
}
