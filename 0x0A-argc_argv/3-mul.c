#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function multiplies two numbers
 * @argc: This is the number of arguments found
 * @argv: This is the array of the arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int t, k, mult;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	for (t = 2; t < argc; t++)
	{
		k = atoi(argv[1]);
		mult = k * atoi(argv[t]);
		printf("%d\n", mult);
	}
	return (0);
}

