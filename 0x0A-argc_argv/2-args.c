#include <stdio.h>

/**
 * main - This function prints out all function
 * @argc: This is the number of argument in the function
 * @argv: This is arrays of the argument in the function
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int t = 0;

	while (t < argc)
	{
		printf("%s\n", argv[t]);
		t++;
	}
	return (0);
}
