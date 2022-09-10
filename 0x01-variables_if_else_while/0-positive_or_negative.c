#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** more headers goes there 
* main - Entry point
* Returne: 0 (sucess)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* My code goes there */
	if (n == 0)
		printf("%d  is zero", n);
	if (n > 0)
		printf("%d is positive", n);
	if (n < 0)
		printf("%d is negative", n);
	}
	return (0);
}
