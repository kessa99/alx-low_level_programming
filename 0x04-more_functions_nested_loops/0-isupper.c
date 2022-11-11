#include "main.h"

/**
 * _isupper - print if is upper or not
 * @c: integer for the entry
 * Return: 1 for sucess 0 for failed
*/

int _isupper(int c)
{
	char i;

	for (i = 'A' ; i <= 'Z' ; i++)
	{
		if (i == c)
		{
			return (1);
			break;
		}
		else
		{
			return (0);
			break;
		}
	}
	return (0);
}
