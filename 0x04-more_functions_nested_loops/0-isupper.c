#include <stdio.h>

/**
 * _isupper - checks if a character is uppercase
 *
 * @c: charatcer to be checked
 *
 * Return: 1 if uppercase, 0 otherwise
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
