#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int t, q;
	char st1[] = "aAeEoOtTlL";
	char st2[] = "4433007711";

	for (t = 0; n[t] != '\0'; t++)
	{
		for (q = 0; q < 10; q++)
		{
			if (n[t] == st1[t])
			{
				n[t] = st2[q];
			}
		}
	}
	return (n);
}
