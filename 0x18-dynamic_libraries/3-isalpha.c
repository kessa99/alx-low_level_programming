#include <stdio.h>

/**
 * _isalpha - print alpha alphabet
 * @c: the argument
 * Return: 0 (sucess)
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
