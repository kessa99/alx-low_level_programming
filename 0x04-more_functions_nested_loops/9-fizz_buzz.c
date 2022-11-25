#include "main.h"
#include <stdio.h>

/**
 * main - fizzBuzz
 *
 * Return : 0
*/

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 15 == 0)
		{
			printf("fizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
return (0);
}
