#include "main.h"

/**
 * rev_string - thei function reverse array
 * @n: is an integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int t = 0;
	int q = 0;
	char r;

	while (*(n + t) != '\0')
	{
		t++;
	}
	t--;

	for (q = 0; q < t; q++, t--)
	{
		r = *(n + q);
		*(n + q) = *(n + t);
		*(n + t) = r;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ovf = 0, t = 0, q = 0, digits = 0;
	int v1 = 0, v2 = 0, temp_tot = 0;

	while (*(n1 + t) != '\0')
		t++;
	while (*(n2 + q) != '\0')
		q++;
	t--;
	q--;
	if (q >= size_r || t >= size_r)
		return (0);
	while (q >= 0 || t >= 0 || ovf == 1)
	{
		if (t < 0)
			v1 = 0;
		else
			v1 = *(n1 + t) - '0';
		if (q < 0)
			v2 = 0;
		else
			v2 = *(n2 + q) - '0';
		temp_tot = v1 + v2 + ovf;
		if (temp_tot >= 10)
			ovf = 1;
		else
			ovf = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		q--;
		t--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}

