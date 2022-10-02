#include <stdio.h>

/**
 * main - print name
 * @argc: argc parameter
 * @argv:: parameter
 * Return:0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
