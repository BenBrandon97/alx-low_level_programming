#include "main.h"
/**
 * more_numbers - prints numbers 0 to 14 ten times
 * Return: Always 0
 */
void more_numbers(void)
{
	int number, x;

	for (x = 0; x <= 9; x++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
