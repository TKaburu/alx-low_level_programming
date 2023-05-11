#include "main.h"

/**
 * _sqrt_recursion - This function prints the square root 
 * of a number
 * @n: The bumber whose square root is checked
 *
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion(n, 0));

/**
 * _sqrt - returns the sqare root of a number
 * @n: The number whose quare root is checked
 * @t: number
 */

int _sqrt(int n, int t)
{
	if (t * t == n)
	{
		return (t);
	}
	if (t * t > n)
	{
		return (-1);
	}
	return (_sqrt(n, t + 1));
}	
