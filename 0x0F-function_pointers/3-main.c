#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - main of calc
 * @argc: arg count
 * @argv: args
 *
 * Return: 0
 *
 */

int main(int argc, char **argv)
{
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("%s\n", "Error");
		return (98);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
	    && strcmp(argv[3], "0"))
	{
		printf("%s\n", "Error");
		return (100);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("%s\n", "Error");
		return (99);
	}
	printf("%i\n", (f(atoi(argv[1]), atoi(argv[3]))));
	return (0);
}
