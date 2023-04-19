#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter 
 * on each element of an array
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if ( array != 0 && size_t != NULL && action != NULL)
	{
		for (i=0; i < size_t + 1; i++)
		{
			(*action)(array[i]);
		}
	}
}

