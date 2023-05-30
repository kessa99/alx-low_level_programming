#include <stdio.h>
#include "main.h"

/**
 * main - Entry piont
 * Return: Always 0
 */
int main(void)
{
	int i = 1;

	for (; i < 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
<<<<<<< HEAD
		{
			_putchar((i / 10) + '0');
		}
		_putchar('\t');
=======
			printf("%d ", i);
>>>>>>> 8aaab79079a38711d34e00c6119604d2f9c74866
	}
	printf("Buzz\n");

return (0);
}
