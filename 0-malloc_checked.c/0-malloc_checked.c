#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void *malloc_checked(unsigned int b);
/**
 * *malloc_checked - allocates memory using malloc free
 * @b: number of bytes to be allocated
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b);
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
