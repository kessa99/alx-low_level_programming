#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code goes ther */
	if (n>0)
		printf("this number is positive");
	else
		printf("this number is negative");
	return (0);
}
