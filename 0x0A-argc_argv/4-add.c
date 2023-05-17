#include <stdio.h>
#include <stdlib.h>


/**
* main - This is the entry point fo the function
* @argc: This is an argument for the function
* @argv: This is a second argument for the function
* Return: 0
*/



int main(int argc, char *argv[])
{
	int t = 1, sum = 0;

	while (t < argc)
	{
		if (*argv[t] >= '0' && *argv[t] <= '9')
		{
			sum += atoi(argv[t]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		t++;
	}
	printf("%d\n", sum);
	return (0);
}

