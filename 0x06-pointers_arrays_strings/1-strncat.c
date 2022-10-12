#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: dest value
 * @src: source value
 * @n:parameter to compare index
 *
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
