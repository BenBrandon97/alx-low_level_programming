#include <stdio.h>
#include "main.h"
/**
  * main - prints the name
  * @argc: argument count
  * @argv: argument vector
  * Return: Always 0
  */

int main(int argc, char *argv[])
{
	/*program that prints its name, followed by a new line.*/
	(void) argc;/*This part can nalso be commented out*/
	printf("%s\n", argv[0]);

	return (0);
}
