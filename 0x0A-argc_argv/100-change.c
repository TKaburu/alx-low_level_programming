#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - This function prints the minimum number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if sucessful, otherwise 1 if fail
 */

int main(int argc, char *argv[])
{
	int number, t, s;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	s = 0;

	if (number < 0)
	{
		printf("0\n");

		return (0);
	}

	t = 0;

	while (t < 5 && number >= 0)
	{
		while (number >= coins[t])

		{
			s++;
			number -= coins[t];
		}
		t++;
	}
	printf("%d\n", s);

	return (0);
}
