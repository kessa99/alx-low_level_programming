#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
	printf("the size of int is %d bytes",sizeof(int));
	printf("the size of char is %d bytes",sizeof(char));
	printf("the size of float is %d bytes",sizeof(float));
	print("the size of int float is %d bytes",sizeof(long int));
	printf("the size of int int float is %d bytes",sizeof(long long int));
	return (0);
}
