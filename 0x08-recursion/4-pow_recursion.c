#include "main.h"

/**
 * _pow_recursion - returns x raise to y
 * @x: value to multiply
 * @y: number of times to multiply x
 * Return: x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 1)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

