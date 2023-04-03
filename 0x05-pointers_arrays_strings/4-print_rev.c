#include <stdio.h>
#include <string.h>
/**
 * print_rev - pritns a string in reverse
 * @s: string to pointer
 * Retur: void.
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i > 0 ; i--)
	{
		putchar(s[i]);
	}
}
