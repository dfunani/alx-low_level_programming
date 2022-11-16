#include "function_pointers.h"

/**
 * print_name - prints a name from the func passed in
 * @name: name to print
 * @f: func to pass name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
