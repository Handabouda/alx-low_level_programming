/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root of @n, or -1 if @n does not have a
 * natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	int root = _sqrt_recursion(n / 4) * 2;

	if ((root + 1) * (root + 1) <= n)
	{
		return (root + 1);
	}
	else
	{
		return (root);
	}
}
