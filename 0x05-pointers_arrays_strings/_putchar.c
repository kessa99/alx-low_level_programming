#include <unistd.h>

/**
 * _putchar - print one caracter
 *@c: take a character c
 * Return: 0 (sucess)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
