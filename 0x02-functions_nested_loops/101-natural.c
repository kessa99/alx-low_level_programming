#include <stdio.h>
#include "main.h"
/**
 * main - print the sum of multiple
 *
 * Return: 0(sucess)
*/

int main(void)
{
	int i, k = 0;

	for (i = 1 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			k += i;
	}
	}
	printf("%d", k);
return (0);
}
