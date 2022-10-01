#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: integer
 * Return: 0
*/

int _isdigit(int c)
{
	int i;

	for (i = 0 ; i < 9 ; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	if (c != 0)
	{
		return (0);
	}
	return (0);
}
