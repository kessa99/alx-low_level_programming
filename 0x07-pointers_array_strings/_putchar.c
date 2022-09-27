#include <unistd.h>

/**
 * _putchar - writes the charactar c to stdout
 * @c: the charactat to print
 * Return: On sucess 1.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
