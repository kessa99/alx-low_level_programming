#include "main.h"

/**
 * times_table - print table of 9
 *
 * Return:void
*/

void times_table(void)
{
	int i;
	int j;
	char k;

	for (i = 0 ; i <= 8 ; i++)
	{
		for (j = 0 ; j <= 8 ; j++)
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
				_putchar(k + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		k = i * 9;
		if (k >= 10)
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
		else
		{
			_putchar(' ');
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
