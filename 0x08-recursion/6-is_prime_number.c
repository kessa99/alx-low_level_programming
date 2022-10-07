#include "main.h"

int verify(int, int);
/**
 * is_prime_number - print the prime number
 * @n: integer
 * Return: 0
 */
int is_prime_number(int n)
{
	return (verify(n, 1));
}
/**
 * verify - verification of a check prime
 * @n: number
 * @i: iterator
 * Return: 1 or 0
 */
int verify(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % 1 == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		_putchar(i + '0');
	return (verify(n, i + 1));
}
