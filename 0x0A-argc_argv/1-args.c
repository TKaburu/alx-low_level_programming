#include <stdio.h>

/**
 * main - This function prints the number of arguments
 * @argc: This is the number of argument for function
 * @argv: This is the number of argument for function
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
