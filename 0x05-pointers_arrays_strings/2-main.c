#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return:0 (Always)
*/

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);

	str = "Lorem ipsum...";
	len = _strlen(str);
	printf("%d\n", len);
	str = "";
	len = _strlen(str);
	printf("%d\n", len);
	str = "Holberton!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
