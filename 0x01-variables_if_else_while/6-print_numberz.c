#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints all single digit numbers of base 10
 * Return: Always (0)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 40);
	}
	putchar('\n');
	return (0);
}
