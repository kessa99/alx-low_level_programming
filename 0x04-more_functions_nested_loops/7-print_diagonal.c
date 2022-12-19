#include "main.h"

/**
 * print_diagonal - draws a diagonal
 * @n: integer
 * Return:0
*/

void print_diagonal(int n)
{

	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n - 1; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		}
	}
}

