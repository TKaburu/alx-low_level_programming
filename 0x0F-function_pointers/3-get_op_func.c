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
    int i = 0;

	if (*s != ops[])
	{
		return (NULL);
	}
}
