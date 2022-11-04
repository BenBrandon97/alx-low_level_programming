#include "main.h"
#include <stdio.h>

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - returns natural square root
 * @n: number to calculate root of
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses
 * @i: iterator
 * @n: number to be found sq root
 * Return: integer value
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
