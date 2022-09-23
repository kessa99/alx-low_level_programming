#include "main.h"

/**
 *jack_bauer - print the hour of jack
 *
 * Return:0 (sucess)
*/

void jack_bauer(void)
{
	int i = 10;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar(0 + '0');
		_putchar(0 + '0');
		_putchar(':');
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		_putchar('\n');
		_putchar(2 + '0');
		_putchar(3 +'0');
		_putchar(':');
		_putchar(5 + '0');
		_putchar((i % 10) + '0');
		_putchar('\n');
	}

}
