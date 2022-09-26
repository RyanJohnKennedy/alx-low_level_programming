#include "main.h"

/**
 * _memset - fills the first n bytes of the memory
 * @s: target pointer
 * @b: byte character
 * @n: number of bytes
 * Return: character
 */

char *_memset(char *s, char b, unsigned int n)
{
	for ( ; n > 0; n--)
		s[n - 1] = b;

	return (s);
}
