#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer
 * @b: the constant byte
 * @n: number of bytes
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}

