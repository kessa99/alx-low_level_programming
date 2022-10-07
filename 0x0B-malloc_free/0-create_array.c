#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array
 * @size: size of array
 * @c: charcter
 * Return:0
 */
char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	tab = malloc(sizeof(char) * size);
	if (tab == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		*(tab + i) = c;
	return (tab);
}
