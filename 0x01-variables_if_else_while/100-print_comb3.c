#include <stdio.h>

/**
 * main - print different combinaison
 *
 * Return: 0 (sucess)
*/

int main(void)
{
	int i;

	for (i = 1 ; i < 80 ; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar((89 / 10) + '0');
	putchar((89 % 10) + '0');
	printf("\n");
	return (0);
}
