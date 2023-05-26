#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int t, k;
	int (*address)(int, char **) = main;
	unsigned char op;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		exit(1);
	}

	t = atoi(argv[1]);

	if (t < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (k = 0; k < t; k++)
	{
		op = *(unsigned char *)address;
		printf("%.2x", op);

		if (k == t - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
