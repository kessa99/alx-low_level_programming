#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	printf("the size of int is %zu bytes\n", sizeof(intType));
	printf("the size of char is %zu bytes\n", sizeof(charType));
	printf("the size of float is %zu bytes\n", sizeof(floatType));
	printf("the size of double is %zu bytes\n", sizeof(doubleType));
	return (0);
}
