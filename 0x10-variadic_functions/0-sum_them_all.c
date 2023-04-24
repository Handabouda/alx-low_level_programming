#include "variadic_functions.h"
/**
 * sum_them_all - calculate the sum of all parameters
 * @n: the number of parameters
 *Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	int i;

	va_start(args, n);
	if (n == 0)
		return (0);

	for (i=0; i < n; i++)
	{
		sum = +va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
