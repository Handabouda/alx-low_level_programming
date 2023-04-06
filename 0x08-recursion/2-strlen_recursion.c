#include "main.h"
/** 
 * _strlen_recursion - the length of a string
 * @s: pointer to string
 * return: int
 */
int _strlen_recursion(char *s)
{
	int i;
	if (*s != '\0')
	{
		i++;
		_strlen_recursion(*s + 1);
	}
	_putchar(i);
}

