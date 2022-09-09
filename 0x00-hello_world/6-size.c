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
long lg;
long int lg_int;
long long int lg_lg_int;

printf("the size of long int is %zu byte(s)\n", sizeof(lg_int));
printf("the size of long long int %zu byte(s)\n", sizeof(lg_lg_int));
printf("the size of long is %zu byte(s)\n", sizeof(lg));
printf("the size of int is %zu byte(s)\n", sizeof(intType));
printf("the size of char is %zu byte(s)\n", sizeof(charType));
printf("the size of float is %zu byte(s)\n", sizeof(floatType));
printf("the size of double is %zu byte(s)\n", sizeof(doubleType));
return (0);
}
