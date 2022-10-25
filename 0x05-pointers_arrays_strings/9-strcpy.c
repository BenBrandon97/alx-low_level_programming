#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies string pointed by destination
 * @dest: the destination
 * @src: the source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int d;

	for (d = 0; src[d] != '\0'; d++)
	{
		dest[d] = src[d];
	}
	dest[d++] = '\0';

	return (dest);
}
