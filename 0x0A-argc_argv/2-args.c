#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: parameter
 * @argv: parameter
 * Return:0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", i, argc[i]);
	}
	return (0);
}

