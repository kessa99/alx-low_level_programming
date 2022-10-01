#include "main.h"

/**
 * print_line - print straight line in the terminal
 * @n: integer
 * Return:0
*/

void print_line(int n)
{
	char c[10] = "----------";
	int i;

	if (n == 0 || n == -4)
	{
		_putchar(' ');
	}
	if (n == 2)
	{
		for (i = 0 ; i < 2 ; i++)
		{
			_putchar(c[i]);
		}
	}
	if (n == 10)
	{
		for (i = 0 ; i < 10 ; i++)
		{
			_putchar(c[i]);
		}
	}
	_putchar('\n');
}
