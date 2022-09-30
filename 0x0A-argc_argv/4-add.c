#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive nums
 * @argc: arg number
 * @argv: arg array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, answer;

	answer = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		answer += atol(argv[i]);
	}

	printf("%d\n", answer);

	return (0);
}
