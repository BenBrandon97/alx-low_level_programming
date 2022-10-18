#include "main.h"
#include <unistd.h>

/**
 * _putchar - stands for print
 * 
 * Return: Always 1 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
