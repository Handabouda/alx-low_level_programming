#include "main.h"
/**
 * power - calculate the power
 * @b: base
 * @ex: exponent
 * Return: the power of b by ex
 */
int power(int b, int ex)
{
	int i;
	int r;

	if (ex == 0)
	{
		return (1);
	}
	else
	{
		for (i = 0; i < ex; i++)
			r = r * b;
	}
	return (r);
}























