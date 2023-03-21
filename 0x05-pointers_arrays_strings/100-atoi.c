#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _atoi - convert string an integer
 * @s: pointer of string
 * Return: 0;
 */
int _atoi(char *s)
{
	int i, len = 0;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[0] == '-')
		{
			printf("-");
			printf("%d", s[i]);
		}
		else if (s[0] == '+')
		{
			printf("+");
			printf("%c", s[i]);
		}
		else
			printf("%c", s[i]);
	}
	printf("\n");
return (0);
}
