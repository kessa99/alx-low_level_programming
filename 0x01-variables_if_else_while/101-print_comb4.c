#include <stdio.h>
/**
 * main - principal file
 *
 * Return: 0
 */
int main(void)
{
	int i, c, d, u, n, q, q2;
	char l[] = "789";

	for (i = 0; i <= 788; i++)
	{
		n = i;
		u = n % 10;
		q = n / 10;
		d = q % 10;
		q2 = q / 10;
		c = q2 % 10;
		if (c < d && c < u && d < u)
		{
			putchar(c + '0');
			putchar(d + '0');
			putchar(u + '0');
			putchar(',');
			putchar(' ');
		}
	}
	for (i = 0; i <= 2; i++)
	{
		putchar(l[i]);
	}
printf("\n");
return (0);
}
