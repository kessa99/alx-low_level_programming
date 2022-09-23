#include <stdio.h>

/**
 * main - print combinaison of single_digit
 *
 * Return: 0 (sucess)
*/

int main(void)
{
	int i;

	for (i = 0 ; i < 9 ; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar(9 + '0');
	return (0);
}
