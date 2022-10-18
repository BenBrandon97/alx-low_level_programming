#include "main.h"
/**
 * main - prints alphabets in lowercase followed by new line
 * Return: Always 0
 */
void print_alphabet(void)
{
	char lc;

	for (lc = 'a', lc <= 'z'; lc++;)
	{
		_putchar(lc);
	}
	 _putchar('\n');
}
