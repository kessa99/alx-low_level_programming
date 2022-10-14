#include "main.h"
/**
 * malloc_checked - allocates memory using
 * @b: integer unsigned
 * Return: 0(sucess)
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (0);
}
