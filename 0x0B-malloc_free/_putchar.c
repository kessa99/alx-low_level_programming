#include <unistd.h>
/**
 * _putchar - print the character
 * @c: parameter of char
 * Return: -1 for error 1 for sucess
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
