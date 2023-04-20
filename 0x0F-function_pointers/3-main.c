#include "3-calc.h"
/**
 * main - check the code
 * @arg1: argument count
 * @arg2: argument vector
 *
 * Return: Always 0
 */
int main(int arg1, char *arg2[])
{
	int num1, num2, result;
	int (*func)(int, int);

	if (arg1 != 4)
	{
		printf("ERROR\n");
		exit(98);
	}

	num1 = atoi(arg2[1]);
	num2 = atoi(arg2[3]);

	func = get_op_func(arg2[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((arg2[2][0] == '/' || arg2[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
