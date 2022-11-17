#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - get the apt func
 * @s: op to func
 *
 * Return: ptr to the func
 *
 */

int (*get_op_func(char *s))(int a, int b)
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

	i = 5;
	strcmp(ops[0].op, s) == 0 ? i = 0 : i;
	strcmp(ops[1].op, s) == 0 ? i = 1 : i;
	strcmp(ops[2].op, s) == 0 ? i = 2 : i;
	strcmp(ops[3].op, s) == 0 ? i = 3 : i;
	strcmp(ops[4].op, s) == 0 ? i = 4 : i;
	return (ops[i].f);
}
