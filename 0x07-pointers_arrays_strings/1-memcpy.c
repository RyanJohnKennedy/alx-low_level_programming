#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes
 * Return: pointer character
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (int i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
