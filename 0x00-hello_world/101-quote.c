#include <stdio.h>
#include <unistd.h>
/**
 * man - prints exactl "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19"
 *
 * followed by a new line, to the standard output
 *
 * Return: 1 (sucess)
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
return (1);
}
