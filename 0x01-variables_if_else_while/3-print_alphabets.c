#include <stdio.h>

/**
 * main - print alphabet
 *
 * Return: 0 (sucess)
*/

int main(void)
{
	char c;

	for (c = 'a';c <= 'z';c++)
		putchar(c);
	for (c = 'A';c <= 'Z';c++)
		putchar(c);
	putchar('\n');
	return (0);
}
