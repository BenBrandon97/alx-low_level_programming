#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase followed by new line
 */
void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		_putchar(lc);
	}
	 _putchar('\n');
}
