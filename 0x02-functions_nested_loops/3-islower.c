#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int c)

{
	if (c <= 97 && c <= 122)
	{
	return (0);
	}
	return (1);
}

