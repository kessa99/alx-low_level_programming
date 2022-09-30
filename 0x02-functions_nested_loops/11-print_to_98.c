#include "main.h"

/**
 * print_to_98 - prin number from n to 98
 *
 * Return: void
*/

void print_to_98(int n)
{
	int i;

	if (n > 0 && n != 98)
	{
		printf("%d, ", n);
		while (n > 97)
		{		
			n = n - 1;
           		printf("%d", n);
            		printf(",");
            		printf(" ");
        	}
		printf("98");
	}
	else if (n < 0)
	{
		printf("%d, ", n);
		while (n < 0)
		{
			n = n + 1;
			printf("%d", n);
			printf(",");
			printf(" ");
		}	
		for (i = 1 ; i < 97 ; i++)
		{
			printf("%d", i);
			printf(",");
			printf(" ");
		}
	printf("98");
	}
	else if (n == 98)
	{
		printf("98");
	}
	else
	{
		for (i = 0 ; i < 97 ; i++)
		{
			printf("%d", i);
			printf(",");
			printf(" ");
		}
	printf("98");
	}
}
