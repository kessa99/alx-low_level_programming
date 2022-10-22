#include <stdio.h>

/**
 * hare - print a string
 */
void __attribute__((constructor)) hare(void);

{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
