#include "main.h"

/**
 * string_toupper - function that changes lower to uppercase
 * in a string
 * st: string
 * Return: string 
 */

char *string_toupper(char *st)
{
        int t;

        for (t = 0; st[t] != '\0'; t++)
        {
                if (st[t] >= 'a' && st[t] <= 'z')
                {
                        st[t] = st[t] - 32;
                }
        }
        return (st);
}
