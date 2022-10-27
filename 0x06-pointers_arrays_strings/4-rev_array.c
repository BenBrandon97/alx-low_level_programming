#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Reversing the contents of an array
 * @a: array integer
 * @n: number of elements in array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int x;
	int b;

	for (x = 0; x < n; x++)
	{
		n--;
		b = a[x];
		a[x] = a[n];
		a[n] = b;
	}
}
