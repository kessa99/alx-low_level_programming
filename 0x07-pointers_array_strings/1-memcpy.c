#include "main.h"

/**
 * _memcpy - fonction copies in memory
 * @dest: copy to
 * @src: copy to
 * @n: no of bytes
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
