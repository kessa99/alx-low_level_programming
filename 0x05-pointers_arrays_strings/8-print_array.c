#include "main.h"
#include <stdio.h>
/**
 * print_array - print n digit
 * @a: my array
 * @n: number of values
 * Return: void
 */

void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		printf("%d", a[s]);
		if (s != n - 1)
			printf(", ");
	}
	printf("\n");
}
