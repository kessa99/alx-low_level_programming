#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prin number from n to 98
 *
 * Return: void
*/

void print_to_98(int n)
{
	int i;

	if (n > 98)
	  {
	    for (i = n; i > 98; i--)
	      {
		printf("%d ", i);
		printf(",");
	      }
	    printf("98");
	  }
	else if (n < 98)
	  {
	    for (i = n; i < 98; i++)
	      {
		printf("%d ", i);
		printf(",");
	      }
	    printf("98");
	  }
	else
	  {
	    printf("98");
	  }
	printf("\n");
}
