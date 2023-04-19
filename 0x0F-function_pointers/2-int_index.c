#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: pointer to integer
 * @size: size of array
 * @cmp: pointer to int function
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	else if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			else
				i++;
		}
	}

	return (-1);
}
