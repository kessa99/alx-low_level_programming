#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0(sucess)
*/
int main(void)
{
	int n;
	int k;
	k = n % 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (k == 0)
	
		printf("Last digit of %d is %d and is 0\n", n, k);
	
	if (k > 5)
	
		printf("Last digit of %d is %d and is grater than 5\n", n, k);
	
	if (k < 6)
	
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, k);
	
}
