#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - pointer to a new space in memory
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *pos;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	pos = malloc(sizeof(char) * (len + 1));

	if (pos == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		pos[i] = str[i];

	pos[len] = '\0';

	return (pos);
}
