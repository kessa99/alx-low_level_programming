#include <stdio.h>

/**
 * main - print the alphabet without q and e
 *
 * Return: 0 (sucess)
*/

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		if (c != 'q' && c != 'e')
			putchar(c);
	putchar('\n');
	return (0);
}
