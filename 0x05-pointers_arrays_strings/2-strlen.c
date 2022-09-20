#include <string.h>
#include "main.h"

/**
 * _strlen - returns the lenght
 * @s: the parameter
 * Return: 0 (sucess)
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\n')
	{
		len++;
		s++;
	}
	return (len);
}
