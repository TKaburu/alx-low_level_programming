#include "main.h"

/**
 * is_prime_number - This function checks if number
 * is prime
 * @n: This is the number to be checked
 *
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (n, n - 2);
	}
}

/**
 * _prime - Checks if a number is prime
 * @n: This is the number to be checked
 * @t: number
 */

int _prime(int n, int t)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n % t == 0)
	{
		return (0);
	}
	return (_prime(t, t + 1));
}
