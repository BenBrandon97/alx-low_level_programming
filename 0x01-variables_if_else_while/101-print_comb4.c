#include <stdio.h>
/**
 * main - prints combination of three numbers
 * Return: always success
 */
int main(void)
{
	int dgt1, dgt2, dgt3;

	for (dgt1 = '0'; dgt1 <= '9'; dgt1++)
	{
		for (dgt2 = '0'; dgt2 <= '9'; dgt2++)
		{
			for (dgt3 = '0'; dgt3 <= '9'; dgt3++)
			{
				if (dgt1 < dgt2 && dgt2 < dgt3)
				{
					putchar(dgt1);
					putchar(dgt2);
					putchar(dgt3);

					if (dgt1 != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
