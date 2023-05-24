#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Entry point of the function
 * @argc: first arguments
 * @argv: This is the array arguments
 *
 * Return: 0
 */

int main(int  argc, char *argv[])


	if (argc < 4 || argc > 4)
	{
		printf("ERROR\n");
		exit(42);
	}

	if ((*argv[2] != '+' && *argv[2] != '-'
	&& *argv[2] != '*' && *argv[2] != '/'
	&& *argv[2] != '%'))
	{
		printf("Error\n");
		return (98);

	int t, k;

	t= atoi(argv[1]);
	k = atoi(argv[3]);

	return (0);
}
