#include <stdio.h>
/**
 * main - possible combination of 2 diff digits,
 * in ascending order separated by comma followed by space.
 * Return: Always 0
 */
int main(void)
{
	int dgt;

	for (dgt = '0'; dgt <= '9'; dgt++)
	{
		putchar(dgt);

		if (dgt != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
