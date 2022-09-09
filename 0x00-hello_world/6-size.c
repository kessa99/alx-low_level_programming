#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
	printf("the size of int is %lu bytes",unsigned long sizeof(int));
	printf("the size of char is %lu bytes",unsigned long sizeof(char));
	printf("the size of float is %lu bytes",unsigned long sizeof(float));
	print("the size of int float is %lu bytes",unsigned long sizeof(long int));
	printf("the size of int int float is %lu bytes",unsigned long sizeof(long long int));
	return (0);
}
