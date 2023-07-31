#include "main.h"
/**
 * _memcpy - copies n bytes from src to dest
 * @dest: a memory area
 * @src: memory area
 * @n: number of bytes'
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src,  unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);

}
