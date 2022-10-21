#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes character c to stdout
 * @c: the character to print
 * Return: If success 1 else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
