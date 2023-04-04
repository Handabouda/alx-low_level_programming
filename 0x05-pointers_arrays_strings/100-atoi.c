#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer to string
 * Return: integer value
 */
int _atoi(char *s)
{
	int i;

	if ((s[0] == '-') || (s[0] <= 0) || (s[0] >= 9))
		return (s[0]);
	for (i = 1; i <= strlen(s) - 1; i++)
	{
		if ((s[0] <= 0) || (s[0] >= 9))
			return (s[i]);
	}
}
