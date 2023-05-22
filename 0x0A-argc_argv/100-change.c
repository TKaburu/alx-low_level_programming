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
	int number, t, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	res = 0;

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
			number -= coins[t];
			res++;
		}
		t++;
	}
	printf("%d\n", res);

	return (0);
}
