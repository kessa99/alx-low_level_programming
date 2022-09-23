#include <stdio.h>
#include "main.h"

/**
 * print_sign - print the sign
 *
 * Return:0 (sucess)
*/

int print_sign(int a)
{
	if (a > 0)
	{
		_putchar('+');
		return (1);
	}
	if (a < 0)
	{
		_putchar('-');
		return (0);
	}
	if (a == 0)
	{
		_putchar('0');
		return (-1);
	}
	return (0);
}
