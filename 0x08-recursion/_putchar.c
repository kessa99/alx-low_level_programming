#include <unistd.h>
/**
 * _putchar = print a character
 * @c: a character
 * Return: 1 on sucess -1 for error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
