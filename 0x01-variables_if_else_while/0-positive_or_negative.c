#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* main - the program retun a positive or negative number*/
/* Returne: 0 (sucess)*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code goes there */
	if (n == 0)
		printf("%d  is zero", n);
	else
	{
		if (n > 0)
			printf("%d is positive", n);
		else
			printf("%d is negative", n);
	}
	return (0);
}
