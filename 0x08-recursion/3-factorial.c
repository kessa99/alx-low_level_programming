#include "main.h"
/**
 * factorial - print a number
 * @n: integer n
 * Return: a integer
 */
int factorial(int n)
	{
		if (n < 0)
			return (-1);
		if (n <= 1)
			return (1);
		return (n * factorial(n - 1));
	}
