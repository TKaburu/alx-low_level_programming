#include "main.h"

/**
 * rev_string -prints the  reverse string
 * @s: string to be reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int length = 0;
	int o;

	while (s[length] != '\0')
	{
		length++;
	}
	for (o = 0; o < length; o++)
	{
		length--;
		rev = s[o];
		s[o] = s[length];
		s[length] = rev;
	}
}

