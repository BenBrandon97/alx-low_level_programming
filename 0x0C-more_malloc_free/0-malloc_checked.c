#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - allocates memory
  * @b: size to allocate
  * Return: none
  */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
