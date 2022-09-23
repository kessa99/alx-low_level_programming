#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print the last digit
 * @a:parameter
 * Return: 0(always)
*/

int print_last_digit(int a)
{
	a = a % 10;

	if (a < 0)
		a = -a;


	_putchar(a + '0');
	return (a);
}
