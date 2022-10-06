#include "main.h"

/**
 * string_nconcat - concatenates strings
 * @s1: string
 * @s2: string
 * @n: int
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	string = malloc(sizeof(char) * (len + 1));

	if (string == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		string[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		string[len++] = s2[index];

	string[len] = '\0';

	return (string);
}
