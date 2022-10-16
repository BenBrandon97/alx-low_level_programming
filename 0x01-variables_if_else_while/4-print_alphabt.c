#include <stdio.h>
/**
 * main - print alphabets in lower cases
 * Return: Always 0
 */
int main(void)
{
	char l;

	l = 'a';
	while
		(l <= 'z')
		{
			if ((l != 'q' && l != 'e') && l <= 'z')
				putchar(l);
			l++;
		}
	putchar('\n');
	return (0);
}
