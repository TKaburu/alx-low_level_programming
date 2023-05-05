#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: The pointer to string
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int t;
	int q;
	char dt1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dtrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (t = 0; s[t] != '\0'; t++)
	{
		for (q = 0; q < 52; q++)
		{
			if (s[t] == dt1[q])
			{
				s[t] = dtrot[q];
				break;
			}
		}
	}
	return (s);
}
