#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
	{
		len++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\0';
	return (dest);
}
