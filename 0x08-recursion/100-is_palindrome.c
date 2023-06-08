#include "main.h"


/**
 *is_palindrome - Thisfunction checks if a string is palindrome
 *@s: This is a string
 *@ls: length of string
 *
 * Return: 1 if string is palindrome 0 if not
 */

int is_palindrome(char *s)
{
	int ls == _strlen_recursion;

	return ((s), ls - 1);
}

/**
 * _strlen_recursion - Check for the length of a string
 * @s: This is the pointer to string to be checked
 *
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s++));
}

/**
 * check_palindrome - This function checks if characters are palindrome
 * @s: This the string
 * @t: input
 *
 * Return: 1 if it is palindrome, 0 if not
 */

int check_palindrome(char *s, int ls, int t)
{
	if (*(s + t) != *(s + ls - 1))
	{
		return (0);
	}
	else if (t >= ls)
	{
		return (1);
	}
	return (check_palindrome(s, t + 1, ls - 1));
}
