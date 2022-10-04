#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: string
 */

char *str_concat(char *s1, char *s2)
{
	char *answer;
	int index, answer_i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	answer = malloc(sizeof(char) * len);

	if (answer == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		answer[answer_i++] = s1[index];

	for (index = 0; s2[index]; index++)
		answer[answer_i++] = s2[index];

	return (answer);
}
