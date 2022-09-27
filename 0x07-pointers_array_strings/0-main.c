#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			putchar(' ');
		}
		if (!(i % 10) && i)
		{
			_putchar('\n');
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[98] = {0x00};
	int i;

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	for (i = 0 ; i < 49 ; i++)
	{
		_putchar('-');
	}
	_putchar('\n');
	simple_print_buffer(buffer, 98);    
	return (0);
}
