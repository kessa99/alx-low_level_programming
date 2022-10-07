#include "main.h"
/**
 * _strlen_recursion - returns lenght
 * @s : pointer
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int len = 0 ;
	if (*s == '\0')
		return (len);
	s++;
	return (1 + _strlen_recursion(s));
}
