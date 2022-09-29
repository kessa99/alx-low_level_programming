#incude "main.h"

/**
 * times_table - print table of 9
 *
 * Return:void
*/

void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i <= 8 ; i++)
	{
		for (j = 0 ; j <= 8 ; j++)
		{
			k = i * j;
			if (k > 10)
			{
				_putchar((k / 10) + '0');
				_putchqr((k % 10) + '0');
			}
			else
			{
				_putchar(k + '0');
			}
			_putchar(',');
			_putchar('\t');
		}
		k = i * 9;
		if (k >= 10)
		{
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
		else
		{
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
