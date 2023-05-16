#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
* _strdup - This function return a pointer to a newly allocated
* space in memory
* @str: This is a character
* Return: Null if unseccesful otherwise string
*/

char *_strdup(char *str)
{
	int k = 0;
	char *t;

	if (str == NULL)
	{
		return (NULL);
	}
	/* +1 becuse the length ends with '\0'*/
	t = (char *) malloc(sizeof(char) * (strlen(str) + 1));

	if (t == NULL)
	{
		return (NULL);/*if memorry llocation is not successful return NULL*/
	}

	/* should copy the tring*/
	do {
		t[k] = str[k];
		k++;
	} while (str[k - 1] != '\0');
	return (t);
}
