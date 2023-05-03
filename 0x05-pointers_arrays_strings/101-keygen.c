#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid
 * passwords
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int t, sum, q;

	sum = 0;

	srand(time(NULL));

	for (t = 0; t < 100; t++)
	{
		pass[t] = rand() % 78;
		sum += (pass[t] + '0');
		putchar(pass[t] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			q = 2772 - sum - '0';
			sum += q;
			putchar(q + '0');
			break;
		}
	}

	return (0);
}

