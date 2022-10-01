#include "main.h"

/**
 * main - fizzBuzz
 *
 * Return : 0
*/

void main(void)
{
	int i, j;
	char c[4] = "Fizz";
	char d[4] = "Buzz";
	char e[8] = "FizzBuzz";

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0)
		{
			for (j = 0 ; j < 4 ; j++)
			{
				_putchar(c[j]);
			}
			_putchar(' ');
		}
		else if (i % 5 == 0)
		{
			for (j = 0 ; j < 4 ; j++)
			{
				_putchar(d[j]);
			}
			_putchar (' ');
		}
		else if (i % 3 == 0 || i % 5 == 0)
		{
			for (j = 0 ; j < 8 ; j++)
			{
				_putchar(e[j]);
			}
			_putchar(' ');
		}
		else
		{
			_putchar(i + '0');
			_putchar(' ');
		}
	}
}
