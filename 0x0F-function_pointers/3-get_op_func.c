#include "3-calc.h"

/**
* get_op_func - This is a function pointer
* @s: This is an operator
*
* Return: The pointer to the function
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int t = 0;

	while (ops[t].f != NULL)
	{
		if (*s == *(ops[t].op) && s[1] == '\0')
			return (ops[t].f);
		t++;
	}
	printf("Error\n");
	exit(99);
}
