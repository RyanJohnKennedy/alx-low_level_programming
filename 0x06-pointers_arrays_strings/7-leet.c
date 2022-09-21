#include "main.h"

/**
 * leet - encodes a string into 1337
 * @src: string
 * Return: string
 */

char *leet(char *src)
{
	int i = 0;
	int j = 0;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (src[++i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (src[i] == leet[j] ||
					src[i] - 32 == leet[j])
				src[i] = j + '0';
		}
	}

	return (src);
}
