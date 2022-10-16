#include <stdio.h>
#include <stdlib.h>
/**
 * main - lower and uppercase
 * Return: Always 0
 */
int main(void)
{
	char q;

	for (q = 'a'; q <= 'z'; q++)
	{
		putchar(q);
	}

	for (q = 'A'; q <= 'Z'; q++)
	{
		putchar(q);
	}
	putchar('\n');
	return (0);
}
