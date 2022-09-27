#include "main.h"

/**
 * _strpbrk - searces a string for any of a ser of bytes
 * @s: array
 * @accept: string
 * Return: 0(sucess0
*/

char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0 ; accept[b] ; b++)
		{
			if (*s == accept[b];
			return (s);
		}
	s++;
	}
return ('\0');
}
