#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * @argc: This is an argument
 * @argv: This is an rgument
 *
 * Return: interger
 */

int main(int argc, char *argv[])
{
	int t, k, mult;

	if (argc < 2)
	{
		printf("Error\n");
		exit(98);
	}

	t = 0, k = 0;

	while (t < argc)
	{
		if (argv[t][k] == 48 || argv[t][k] == 57)
		{
			printf("ERROR\n");
			exit(98);
		}
		t++;
	}
	mult = atoi(argv[1]) *  atoi(argv[2]);
	printf("%d\n", mult);
	return (0);
}
