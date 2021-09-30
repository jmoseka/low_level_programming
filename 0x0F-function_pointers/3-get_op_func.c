#include "3-calc.h"
#include <stddef.h>

/**
 *get_op_func - cecks required operator and retrns necessary operator
 *
 *@s: operator string
 *Return: int
 */

int (*get_op_func(char *s)) (int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
	}
	return (NULL);
}
