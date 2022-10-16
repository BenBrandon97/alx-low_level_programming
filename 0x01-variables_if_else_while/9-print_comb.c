#include <stdio.h>
/**
 * main - possible combinations of single digits
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 41; n < 51; n++)
	{
		putchar(n);
		if (n != 50)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
