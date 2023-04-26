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
	unsigned int i;
	char *num_str

	va_start(args, n);
	{
		for (i = 0; i < n; i++)
		{
			num_str = itao(va_arg(arg, int));
			while (*num_str != '\0')
			{
				_putchar(*num_str);
				num_str++;
			}
			if ( i != n - 1 && separator != NULL)
				_putchar(*separator);
		}
	}
	va_end(args);
	_putchar('\n');
}

