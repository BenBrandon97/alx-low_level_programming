#include "main.h"
/**
 * print_line - function that draws straight line
 * @n: the number of '_' to be printed
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}
	_putchar('\n');
}
