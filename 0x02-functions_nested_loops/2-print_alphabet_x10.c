#include "main.h"
/**
 * main - print alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int tn;
	char lc;

	for (tn = 0, tn <= 9; tn++;)
	{
		for (lc = 'a', lc <= 'z'; lc++;)
			_putchar(lc);
		_putchar('\n');
	}
}
