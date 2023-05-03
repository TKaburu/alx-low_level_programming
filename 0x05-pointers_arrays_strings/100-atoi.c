#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: parameter name
 *
 * Return: value of integer
 */

int _atoi(char *s)
{
	int q, r, s, t, u, v;

	q = 0;
	r = 0;
	s = 0;
	t = 0;
	u = 0;
	v = 0;

	while (s[t] != '\0')
		t++;

	while (q < t && u == 0)
	{
		if (s[q] == '-')
			++r;

		if (s[q] >= '0' && s[q] <= '9')
		{
			v = s[q] - '0';
			if (r % 2)
				v = -v;
			s = s * 10 + v;
			u = 1;
			if (s[q + 1] < '0' || s[q + 1] > '9')
				break;
			u = 0;
		}
		q++;
	}

	if (u == 0)
		return (0);

	return (s);
}
