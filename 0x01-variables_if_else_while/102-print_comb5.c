#include <stdio.h>
/**
 * main - prints combination of 5 numbers
 * Return: Always success
 */
int main(void)
{
	int n1, n2, n3, n4;

	for (n1 = '0'; n1 <= '9'; n1++)
	{
		for (n2 = '0'; n2 <= '9'; n2++)
		{
			for (n3 = '0'; n3 <= '9'; n3++)
			{
				for (n4 = '0'; n4 <= '9'; n4++)
				{
					if (((n4 + n3) > (n2 + n1) && n3 >= n1) || n1 < n3)
					{
						putchar(n1);
						putchar(n2);
						putchar(' ');
						putchar(n3);
						putchar(n4);

					if (n1 + n2 + n3 + n4 == 227 && n1 == 57)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
