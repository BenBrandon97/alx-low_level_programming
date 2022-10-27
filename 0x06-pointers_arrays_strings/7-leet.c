#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: Encoded string
 */
char *leet(char *s)
{
	int a, b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; s[a] != '\n'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (s[a] == s1[b])
			{
				s[a] = s2[b];
			}
		}
	}
	return (s);
}
