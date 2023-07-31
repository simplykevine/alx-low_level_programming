#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a char
 * @s: pointer to the string
 * @c: character to search
 *
 * Return: pointer to where c is or NULL
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (c == s[a])
		{
			return (s + a);
		}
		a++;
	}
	if (c == s[a])
	{
		return (s + a);
	}

	return (NULL);
}
