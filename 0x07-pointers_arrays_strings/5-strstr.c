#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates the whole substring
 * @haystack: pointer to a string
 * @needle: pointer to the string to be searched
 *
 * Return: pointer to haystack, NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	char *a = haystack;
	char *b = needle;

	while (*haystack)
	{
		while (*b && *haystack == *b)
		{
			haystack++;
			b++;
		}

		if (*b == '\0')
		{
			return (a);
		}

		haystack = a + 1;
	}

	return (NULL);


}
