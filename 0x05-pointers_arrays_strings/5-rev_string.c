#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: string to pointer
 * Return: void.
 */
void rev_string(char *s)
{
	int i;

	for (i = strlen(s) + 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
}
