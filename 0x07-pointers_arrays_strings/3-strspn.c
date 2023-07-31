#include "main.h"
/**
 * _strspn - length of a prefix
 * @s: pointer to a string
 * @accept: pointer to a string
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	unsigned int length = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				length++;
				break;
			}
		}
		if (accept[b] == '\0')
			break;
	}

	return (length);
}
