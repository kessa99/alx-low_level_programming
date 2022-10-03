#include "main.h"
/**
 * print_triangle - print a tringle
 * @size: integer
 * Return:0
*/
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0 ; i <= size ; i++)
	{
		for (j = size ; j >= i ; j--)
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