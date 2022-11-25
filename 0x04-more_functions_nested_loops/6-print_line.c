#include "main.h"

/**
 * print_line - print straight line in the terminal
 * @n: integer
 * Return:0
*/

void print_line(int n)
{
	char c[] = "____________________________";
	int i;

	if (n <= 0)
	{
		_putchar(' ');
	}
	for (i = 0; i < n; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
