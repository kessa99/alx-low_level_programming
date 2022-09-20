#include <stdio.h>
#include "main.h"
/**
 * swap_int - change place
 * @a: for the first number
 * @b: for the second number
 * Return (0);
*/

void swap_int(int *a, int *b)
{
	int chg;
	chg = *a;
	*a = *b;
	*b = chg;
}
