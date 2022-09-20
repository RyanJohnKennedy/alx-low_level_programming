#include "main.h"

/**
 * _strcpy - copy string
 * @dest: string
 * @src: string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (*(src + index) != '\0')
	{
		*(dest + index) = *(src + index);
		index++;
	}

	*(dest + index) = '\0';

	return (dest);
}
