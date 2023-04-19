#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: pointer to name
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	f = print_name_as_is(name);
}
