#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: arg number
 * @argv: arg array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atol(argv[1]);
	j = atol(argv[2]);
	sum = i * j;

	printf("%d\n", sum);
	return (0);
}
