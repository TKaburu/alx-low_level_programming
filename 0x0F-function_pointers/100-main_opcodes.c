#include <stdio.h>
#include <stdlib.h>

/**
 * main - The function entry point
 * @argv: This is the array arguments
 * @argc: This is an argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int bytes, t;
	char *k;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		exit(42);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(98);
	}
	k = (char *)main;

	t = 0;

	do {
		if (t == bytes - 1)
		{
			printf("%02hhx\n", k[t]);
			break;
		}
		printf("%02hhx ", k[t]);
		t++;
	} while (t < bytes);
	return (0);
}
