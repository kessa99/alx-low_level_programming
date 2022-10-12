#include "main.h"

/**
 * _strcat - function strcat
 * @dest:parameter
 * @src: second parameter
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
