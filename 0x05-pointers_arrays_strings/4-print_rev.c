#include <stdio.h>
#include <string.h>
/**
 * print_rev - pritns a string in reverse
 * @s: string to pointer
 * Retur: void.
 */
void print_rev(char *s)
{
	for (i = strlen(s); i > 0 ; i--)
	{
		puts("%c", s[i]);
	}
