#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum number of coins to make change
 * @argc: arg number
 * @argv: arg array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents, num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	while (cents > 0)
	{
		num++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", num);

	return (0);
}
