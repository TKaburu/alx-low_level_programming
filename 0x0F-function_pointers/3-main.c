#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point of the function
 * @argc: first arguments
 * @argv: This is the array arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		return (98);
	}

	if ((*argv[2] != '+' && *argv[2] != '-'
	&& *argv[2] != '*' && *argv[2] != '/'
	&& *argv[2] != '%') || (strlen(argv[2]) > 1))
	{
		printf("Error\n");
		return (99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%')
	&& *argv[3] == '0')
	{
		printf("Error\n");
		return (100);
	}

	(*get_op_func(argv[2]))(i, j);

	return (0);
}
