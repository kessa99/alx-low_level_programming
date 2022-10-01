#include "main.h"

/**
 * print_diagonal - draws a diagonal
 * @n: integer
 * Return:0
*/

void print_diagonal(int n)
{

	int i;
	int j;

	if (n == 0 || n < 0)
	{
		putchar('\n');
	}
	for (i = 1 ; i <= n ; i++)
	{
		for (j = 1 ; j <= i ; j++)
		{
			putchar('\/');
		}
	putchar('\n');
	}
}

