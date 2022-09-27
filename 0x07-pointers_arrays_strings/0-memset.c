#include "main.h"

/**
 * _memset - fill memory bock
 * @s: adress of type char
 * @b: value
 * @n: the byte of type int
 *
 * Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
