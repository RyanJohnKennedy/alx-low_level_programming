#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: Destination
 * @src: Source
 * Return: String
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int destLength = 0;

	while (dest[index])
	{
		destLength++;
		index++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[destLength] = src[index];
		destLength++;
	}

	return (dest);
}
