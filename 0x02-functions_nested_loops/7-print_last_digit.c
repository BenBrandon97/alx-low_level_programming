#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: the number
 * Return: value of last number
 */
int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
	{
		lastdigit *= -1;
	}
	_putchar(lastdigit + '0');
	return (0);
}