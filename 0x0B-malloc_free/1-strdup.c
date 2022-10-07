#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer
 * @str: pointer to string
 * Return: NULL if str NULL
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	if (nstr == NULL)
	{
		return (NULL);
	}

	for (j = 0 ; j < i ; j++)
	{
		nstr[j] = str[j];
	}
	nstr[i] = '\0';
	return (nstr);
}
