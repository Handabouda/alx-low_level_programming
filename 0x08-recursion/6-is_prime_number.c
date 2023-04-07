#include "main.h"

/**
 * isprime_help - help to determine if n is prime
 * @n: number to be determined.
 * @i: counter
 * Return: 1 or 0
**/

int isprime_help(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i > n / 2)
		return (1);
	return (isprime_help(n, i + 1));
}

/**
 * is_prime_number - number prime or not.
 * @n: number
 * Return: 1
 **/
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
return (isprime_help(n, 2));
}
