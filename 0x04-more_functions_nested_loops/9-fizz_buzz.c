#include <stdio.h>
/**
 * main - prints FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int k;

	printf("1");
	for (k = 2; k <= 100; k++)
	{
		printf(" ");

		if (k % 3 == 0)
			printf("Fizz");

		if (k % 5 == 0)
			printf("Buzz");

		if (k % 3 != 0 && k % 5 != 0)
			printf("%d", k);
	}
	printf("\n");

	return (0);
}
