#include "main.h"


/**
 * _strlen - gets the length of a string
 * @str: string input
 * Return: string length
 */
int _strlen(const char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}





/**
 * power - calculate the power
 * @b: base
 * @ex: exponent
 * Return: the power of b by ex
 */
int power(int b, int ex)
{
	int i;
	int r = 1;

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



/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number or 0 if there is
 * one or more chars in the string b that is not 0 or 1, or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int sum = 0;

	if (b == NULL)
		return (0);

	else
	{
		for (i = _strlen(b) - 1; i >= 0; i--)
		{
			if (b[i] == '1')
				sum += 1 * power(2, i);
			else if (b[i] == '0')
				sum += 0;
			else
			{
				return (0);
			}
		}
	}
	return (sum);
}
