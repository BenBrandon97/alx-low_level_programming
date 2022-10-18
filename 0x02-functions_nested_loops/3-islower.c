#include "main.h"
/**
 * main - start (checks for lowecase character)
 *@c: the character
 *Return: 1 if lowercase and 0 if not
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
