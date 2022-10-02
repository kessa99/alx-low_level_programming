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
	int i;

	for (i = 0 ; i < 6 ; i++)
	{
		_putchar(s1[i]);
	}
	_putchar('\n');
	for (i = 0 ; i < 7 ; i++)
	{
		_putchar(s2[i]);
	}
	ptr = _strcat(s1, s2);
	for (i = 0 ; i < 6 ; i++)
	{
		_putchar(s1[i]);
	}
	for (i = 0 ; i < 7 ; i++)
	{
		_putchar(s2[i]);
	}
	_putchar(*ptr);
	return (0);
}
