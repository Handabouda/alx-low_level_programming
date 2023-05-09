#include "main.h"

/**
 * bin - prints the binary representation of a number
 * @n: the number to be converted
 * Return: the binary
 */
int bin(unsigned long int n)
{
	if (n > 1)
	bin(n >> 1);
	return(putchar((n & 1) + '0'));
}


/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: the index starting from 0 of the bit you want to get
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	unsigned long int j = 0;
	const char *str = bin(n);

	for (i = _strlen(str); i > 0; i--)
	{
		if (index == j)
			return (str[i]);
		j++;
	}
	return (-1);
}
