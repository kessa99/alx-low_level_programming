#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 0 (sucess)
*/

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "world!\n";
	char *ptr;

	_putchar(s1[98]);
	_putchar('\n');
	_putchar(*s2);
	ptr = _strcat(s1, s2);
	_putchar(s1[98]);
	_putchar(*s2);
	_putchar(*ptr);
	return (0);
}
