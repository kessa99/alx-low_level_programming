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
char charType;
long int lg_int;
long long int lg_lg_int;

printf("size of a long int: %zu byte(s)\n", sizeof(lg_int));
printf("size of a long long int: %zu byt(s)\n", sizeof(lg_lg_int));
printf("size of an int: %zu byt(s)\n", sizeof(intType));
printf("size of a char: %zu byt(s)\n", sizeof(charType));
printf("the size of float: %zu byt(s)\n", sizeof(floatType))
return (0);
}
