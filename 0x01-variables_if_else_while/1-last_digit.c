#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0 (sucess)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_Max / 2;

