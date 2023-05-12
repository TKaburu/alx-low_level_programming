#include "main.h"

/**
 * _isdigit - This function Checks for a number 0 through 9
 * @c: check if number is between 0 and 9
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
