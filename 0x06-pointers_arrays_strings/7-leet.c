#include "main.h"

/**
 * leet - encodes a string into 1337
 * @a: string
 * Return: string
 */

char *leet(char *a)
{
	int i = 0;
	int j = 0;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (a[++i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (a[i] == leet[j] ||
					a[i] - 32 == leet[j])
				a[i] = j + '0';
		}
	}

	return (a);
}
