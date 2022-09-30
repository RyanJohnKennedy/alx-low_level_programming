#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: integer
 * @argv: string array
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
