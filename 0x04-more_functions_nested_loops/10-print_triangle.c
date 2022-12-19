#include "main.h"
/**
 * print_triangle - print a tringle
 * @size: integer
 * Return:0
*/
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 1 ; i <= size ; i++)
	{
		for (j = size - 1 ; j >= i ; j--)
		{
			_putchar(' ');
		}
		for (j = 1 ; j <= i ; j++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
