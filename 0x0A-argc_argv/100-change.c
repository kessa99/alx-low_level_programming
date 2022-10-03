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
	int a, j, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0 ; j < 5 && a >= 0 ; j++)
	{
		while (a >= coins[j])
		{
			a -= coins[j];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
