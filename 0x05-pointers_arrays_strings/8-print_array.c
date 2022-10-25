#include "main.h"
#include <stdio.h>
/**
 * print_array - print n element of array
 * @a: integer of array
 * @n: elements of array
 * Return: void
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		printf("%d", a[l]);

		if (l != n - 1)
			printf(", ");
	}
	printf("\n");
}
