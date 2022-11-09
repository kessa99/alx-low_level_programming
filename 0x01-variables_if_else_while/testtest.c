#include <stdio.h>
/**
 *
 */
int main(void)
{
	int i, a;

	for (i = 0 ; i <= 20; i++)
	{
		for (a = 5; a <= 8; a++)
		{
			if (i == a)
			{
				continue;
			}
			else
			{
				printf("%d", i);
				printf("\n");
			}
		}
	}
return (0);
}
