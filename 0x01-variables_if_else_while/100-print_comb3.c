#include <stdio.h>
/**
 * main - possible combination of 2 diff digits,
 * in ascending order separated by comma followed by space.
 * Return: Always 0
 */
int main(void)
{
	int dgt1, dgt2;

	for (dgt1 = '0'; dgt1 <= '9'; dgt1++)
	{
		for (dgt2 = '0'; dgt2 <= '9'; dgt2++)
		{
			if (dgt1 < dgt2)
			{
				putchar(dgt1);
				putchar(dgt2);
				
				if (dgt1 != '8' || (dgt1 == '8' && dgt1 != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
