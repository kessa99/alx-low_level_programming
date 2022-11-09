#include <stdio.h>
/**
 *
 */
int main(void)
{
	int k;

	k = 12 % 100;
	putchar((12 / 100) + '0');
	putchar((k / 10) + '0');
	putchar((k % 10) + '0');
	putchar('\n');
	return(0);
}
