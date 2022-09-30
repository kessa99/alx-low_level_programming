#include "maim.h"

/**
 * print_times_table - table of n
 * @n : a integer
 * Return: 0 (sucess)
*/

void print_times_table(int n)
{
	int i, j, k;

	if (n > 15 && n < 0)
	{
		return;
	}
	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < n - 1 ; j++)
		{
			k = i * j;
			if (k >= 10)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(k  + '0');
			}
				_putchar(',');
				_putchar(' ');
			}
			k = i * n;
			if (k >= 10)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(k  + '0');
			}
		_putchar('\n');
	}
}
