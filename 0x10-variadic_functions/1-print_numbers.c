#include "variadic_functions.h"
/**
 * print_numbers - prints numbers bollowed by a new line
 * @separator: the string to be printed between functions
 * @n: the number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int;

	va_start(args, n);
	if (!separator)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(va_arg(args, int);
		}
	}
	va_end(args);
}

