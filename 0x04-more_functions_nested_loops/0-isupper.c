#include "main.h"

/**
 * _isupper - print if is upper or not
 * @c: integer for the entry
 * Return: 0 (sucess)
*/

int _isupper(int c)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i == c)
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (0);
}
