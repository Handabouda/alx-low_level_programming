#include <stdio.h>

/**
 * main Entry point
 *
 * find out upper letter
 * Return: 0 if min
 * Return: 1 if maj
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}
	
	return (0);
}
