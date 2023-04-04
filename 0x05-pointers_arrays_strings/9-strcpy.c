#include "main.h"

/**
 * *_strcpy - copies the string pointed to src
 * @dest: pointer to the buffer where we copy the string
 * @src: string to be copied
 *
 * Return: the dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
