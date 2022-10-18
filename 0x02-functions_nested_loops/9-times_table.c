#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int numb, multi, product;

	for (numb = 0; numb <= 9; numb++)
	{
		_putchar('0');

		for (multi = 0; multi = 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			product = numb * multi;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
