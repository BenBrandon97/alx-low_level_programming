#include "main.h"
/**
 * print_last_digit - prints last digit from division of two numbers
 * @n: the number
 * Return: value of last number
 */
int print_last_digit(int n)
{
	int p;

	if (n < 0)
		n = -n;
	p = n % 10;
	return (p);
}
