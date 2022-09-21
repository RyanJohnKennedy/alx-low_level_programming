#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int index = 0;
	int diff = 0;

	while (1)
	{
		if (s1[index] == '\0' && s2[index] == '\0')
			break;
		else if (s1[index] == '\0')
		{
			diff = s2[index];
			break;
		}
		else if (s2[index] == '\0')
		{
			diff = s1[index];
			break;
		}
		else if (s1[index] != s2[index])
		{
			diff = s1[index] - s2[index];
			break;
		}
		else
			i++;
	}

	return (diff);
}
