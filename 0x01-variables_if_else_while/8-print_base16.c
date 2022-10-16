#include <stdio.h>
/**
 * main - all numbers of base 16
 * Return: Always 0
 */
int main(void)
{
	char b;

	int c;

	b = 'a';
	c = 0;
	while
		(c < 10)
		{
			putchar(c + '0');
			c++;
		}
	while
		(c <= 'f')
		{
			putchar(b);
			c++;
		}
	putchar('\n');
	return (0);
}
