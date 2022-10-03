#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: argc parameter
 * @argv: an array of command
 * Return:0
*/
int main(int argc, char *argv[])
{
	int res = 0, a, i, j, k;
	int sum;

	if (argc == 1)
		printf("0\n");

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
			 return (1);
			}
		}
	}
	for (k = 1 ; k < argc ; k++)
	{
		a = atoi(argv[k]);
		result += a;
	}
	printf("%d\n", res);
	return (0);
}
