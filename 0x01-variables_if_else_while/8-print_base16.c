#include <stdio.h>

/**
 * main - print digit in base 16 with putchar
 *
 * Return: 0(sucess)
*/

int main(void)
{
	int i;
	char c[6] = "abcdef";

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
	}
	for (i = 0 ; i < 6 ; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
