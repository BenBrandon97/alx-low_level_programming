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

	while (*(src + d) != '\0')
	{
		*(dest + d) = *(src + d);
		d++;
	}

	*(dest + d) = '\0';
	return (dest);
}
