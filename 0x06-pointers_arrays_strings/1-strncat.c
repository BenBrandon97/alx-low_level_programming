#include "main.h"
/**
 * _strncat - Joins two strings
 * @dest: Destination value
 * @src: Source value
 * @n: Concatenation character limit
 * Return: Pointer to concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (a[dest] != '\0')
	{
		a++;
	}

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
