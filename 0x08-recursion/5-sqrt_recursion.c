#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0 )
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if ((_sqrt_recursion(n / 4) * 2 + 1) * ((_sqrt_recursion(n / 4) * 2 + 1) <= n))
	{
		return ((_sqrt_recursion(n / 4) * 2 + 1);
	}
	else
	{
		return ((_sqrt_recursion(n / 4) * 2);
	}
}
