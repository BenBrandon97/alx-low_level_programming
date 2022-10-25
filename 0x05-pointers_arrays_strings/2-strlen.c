#include "main.h"

/**
 * _strlen - Returns length of a string
 * @s: string to count
 * Return: string length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

	/*for (; *s != '\0'; len++)*/
	 /*{*/
	 /*s++;*/
	 /*}*/
	 /*return (len);*/
