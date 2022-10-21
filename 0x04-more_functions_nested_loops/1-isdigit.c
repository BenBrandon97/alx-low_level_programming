#include "main.h"

/**
 * _isdigit - Checks if a charis a digit
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 if not
 */
int _isdigit(int c)
{
	int a = 0;

	if (c >= '0' && c <= '9')
		a = 1;

	return (a);
}
