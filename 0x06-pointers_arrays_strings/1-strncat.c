#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int destLength = 0;

	while (dest[index])
	{
		destLength++;
		index++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[destLength] = src[index];
		destLength++;
	}

	return (dest);
}
