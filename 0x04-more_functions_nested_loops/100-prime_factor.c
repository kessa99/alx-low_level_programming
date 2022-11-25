#include <stdio.h>

/**
 * main - prints factor
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int premier = 612852475143;
	unsigned long int i = 3;

	while (premier % 2 == 0)
	{
		printf("%d ", 2);
		premier = premier / 2;
	}
	for (; i <= premier; i += 2)
	{
		while (premier % i == 0)
		{
			printf("%ld ", i);
			premier = premier / i;
		}

	}
	printf("\n");
return (0);
}
