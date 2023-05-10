#include "main.h"

/**
 * _pow_recursion - Thi function returns the value of x
 * to the power of y
 * @x: The value to be raised
 * @y: The power
 *
 * Return: The result
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
