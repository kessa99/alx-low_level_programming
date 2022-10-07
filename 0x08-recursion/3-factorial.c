#include "main.h"
/**
 * factorial - return the factorial
 * @n: integer n
 * Retuen: int
 */
int factorial(int n)
	{
		if (n <= 1)
			return (1);
		if (n < 0)
			return (-1);
		return (n * factorial(n-1));
	}
