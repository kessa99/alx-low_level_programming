#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: integer
 * Return: 0
*/

int _isdigit(int c)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (c == i)
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
