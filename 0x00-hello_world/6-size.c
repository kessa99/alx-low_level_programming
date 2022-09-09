#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
	printf("the size of int is %u bytes\n", sizeof(unsigned int));
	printf("the size of char is %lu bytes\n", sizeof(unsigned char));
	printf("the size of float is %lu bytes\n", sizeof(unsigned float));
	printf("the size of short is %lu bytes\n", sizeof(unsigned short));
	printf("the size of long is %lu bytes\n", sizeof(unsigned long));
	printf("the size of long int float is %lu bytes\n", sizeof(unsigned long int));
	printf("the size of long long float is %lu bytes\n", sizeof(unsigned long long));
	return (0);
}
