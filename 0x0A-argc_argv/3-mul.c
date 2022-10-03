#include <stdio.h>
#include <stdlib.h>
/**
 * main -  program that multiplies two numbers
 * @argc: argc parameter
 * @argv: an array of a command
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int res = 0, a, b;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	res = a * b;

	printf("%d\n", res);
	return (0);
}
