#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
	printf("the size of int is %ld bytes",sizeof(int));
	printf("the size of char is %ld bytes",sizeof(char));
	printf("the size of float is %ld bytes",sizeof(float));
	print("the size of int float is %ld bytes",sizeof(long int));
	printf("the size of int int float is %ld bytes",sizeof(long long int));
	return (0);
}
