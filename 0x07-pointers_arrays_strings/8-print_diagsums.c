#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals.
 * @a: a square matrix
 * @size: an input integer.
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, max = size * size, s1 = 0, s2 = 0;

	for (; i < max; i += size + 1)
		s1 += a[i];

	for (i = size - 1; i < max - 1; i += size - 1)
		s2 += a[i];

	printf("%d, %d\n", s1, s2);
}
