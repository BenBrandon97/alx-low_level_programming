#include "main.h"
/**
 * print_last_digit - prints last digit from division of two numbers
 * @n: the number
 * Return: value of last number
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');

	return (0);
}
