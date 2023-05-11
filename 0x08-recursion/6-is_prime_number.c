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
	return (n);
	return (n - 1);

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
		return (0);
	}
	else if (n % 1 == 0)
	{
		return (1);
	}
	return (_prime(t, t + 1));
}
