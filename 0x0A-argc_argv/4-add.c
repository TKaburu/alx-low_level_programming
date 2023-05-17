#include <stdio.h>
#include <stdlib.h>


/**
 * main - This is the entry point fo the function
 *
 * Return: Always 0 (Success)
 */



int main(int argc, char *argv[])
{
        int t = 1, sum = 0;

        if (argc == 1)
                printf("0\n");

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

