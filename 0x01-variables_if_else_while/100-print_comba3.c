#include <stdio.h>

/**
 * main - print different combinaison
 *
 * Return: 0 (sucess)
*/

int main(void)
{
	int i;

	for (i = 1 ; i < 10 ; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(',');
		printf(" ");
	}

	for (i = 12 ; i < 19 ; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(',');
		printf(" ");
	}
	for (i = 23 ; i < 30 ; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(',');
		printf(" ");
	}
	for (i = 34 ; i < 40 ; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(',');
		printf(" ");
	}

	for (i = 45 ; i < 50 ; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(',');
		printf(" ");
	}
	for (i = 56 ; i < 60 ; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(',');
		printf(" ");
	}
	for (i = 67 ; i < 70 ; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(',');
		printf(" ");
	}
	putchar((78 / 10) + '0');
	putchar((78 % 10) + '0');
	putchar((79 / 10) + '0');
	putchar((79 % 10) + '0');
	putchar((89 / 10) + '0');
	putchar((89 % 10) + '0');
	printf("\n");
	return (0);
}
