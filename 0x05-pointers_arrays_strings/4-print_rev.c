#include "main.h"
/**
 * print_rev - Prints a string reverse
 * @s: string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int str = 0;

	while (s[str] != '\0')
	{
		str++;
	}
	for (str -= 1; str >= 0; str--)
	{
		_putchar(s[str]);
	}
	_putchar('\n');
}
