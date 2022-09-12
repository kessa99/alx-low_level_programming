#include <stdio.h>

/**
 * main - print digit in base 16 with putchar
 *
 * Return: 0(sucess)
*/

int main(void)
{
	int i;

	for (i = 0 ; i < 16 ; i++)
		putchar((i % 10) + '0');
	putchar('\n');
	return (0);
}
