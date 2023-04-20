#include "3-calc.h"
/**
 * main - check the code
 * @arg1: argument count
 * @arg2: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}

	func = get_op_func(argv[2]);
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
	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
