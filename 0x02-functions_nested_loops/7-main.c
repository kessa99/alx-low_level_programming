#include "main.h"

/**
 * main - chech the code
 *
 * Return:0 (sucess0
*/

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-10240);
	_putchar('0' + r);
	_putchar('\n');
	return(0);	
}
