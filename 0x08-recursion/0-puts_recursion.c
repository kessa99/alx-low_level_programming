#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: a pointer
 * Return: 1 on sucess EOF error
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
