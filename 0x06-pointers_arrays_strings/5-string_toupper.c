#include "main.h"
/**
 * string_toupper - Changes all lowercase letter
 * of a string to uppercase
 * @n: String to be modifies
 * Return: String in uppercase
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] <= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
