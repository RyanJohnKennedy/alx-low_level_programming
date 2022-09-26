#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: character pointer
 * @accept: character pointer
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int index;

	while (*s)
	{
		for (i = 0; accept[index]; index++)
		{
			if (accept[index] == *s)
			{
				byte++;
				break;
			}
			else if ((accept[index + 1]) == '\0')
				return (byte);
		}
		s++;
	}

	return (byte);
}
