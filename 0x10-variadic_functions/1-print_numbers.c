#include "variadic_function.h"
/**
 * sum_them_all - calculate the sum of all parameters
 * @n: the number of parameters
 *Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);
	int sum = 0;
	int i = 0;

	if (n == 0)
		return (0);

	for (i; i < n; i ++)
	{
		sum = + va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
