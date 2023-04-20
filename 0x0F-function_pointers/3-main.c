#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}


	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", func(a, b));
	return (0);
}
