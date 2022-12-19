#include "main.h"
#include <stdio.h>

/**
 * main - fizzBuzz
 *
 * Return: 0
*/

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			_putchar(i + '0');
		}
		_putchar('\t');
	}
return (0);
}
