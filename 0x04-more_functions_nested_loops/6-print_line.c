#include "main.h"

/**
 * print_line - print straight line in the terminal
 * @n: integer
 * Return:0
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('$');
	_putchar('\n');
}
