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
	long longType;
	long long long_long;
	long double long_double;
	unsigned long long uns_long;
	unsigned short uns_short;
	unsigned int uns_int;
	unsigned char uns_char;

	printf("the size of unsigned long long is %zu bytes\n", sizeof(uns_long));
	printf("the size of long double is %zu bytes \n", sizeof(long_double));
	printf("the size of unsigned long long is %zu bytes\n", sizeof(uns_short));
	printf("the size of unsigned short is %zu bytes \n", sizeof(uns_short));
	printf("the size of unsigned int is %zu bytes \n", sizeof(uns_int));
	printf("the size of unsigned char is %zu bytes \n", sizeof(uns_char));
	printf("the size of long long is %zu bytes \n", sizeof(long_long));
	printf("the size of long is %zu bytes\n", sizeof(longType));
	printf("the size of int is %zu bytes\n", sizeof(intType));
	printf("the size of char is %zu bytes\n", sizeof(charType));
	printf("the size of float is %zu bytes\n", sizeof(floatType));
	printf("the size of double is %zu bytes\n", sizeof(doubleType));
	return (0);
}
