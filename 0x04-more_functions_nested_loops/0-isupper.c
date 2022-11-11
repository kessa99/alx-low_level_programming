#include "main.h"

/**
 * _isupper - print if is upper or not
 * @c: integer for the entry
 * Return: 0 (sucess)
*/

int _isupper(int c)
{
	int i;

	for (i = 'A' ; i <= 'Z' ; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
