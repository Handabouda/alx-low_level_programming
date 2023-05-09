#include "main.h"
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
	char str = print_binary(n);

	for (i = _strlen(str); i > 0; i--)
	{
		if (index == j)
			return (print_binary(n)[i]);
		j++;
	}
}
