#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array for the function.
 * @size: is the size of unsigned int array
 * @c: is a character for char.
 *
 * Return: Returns to the array.
 **/

char *create_array(unsigned int size, char c)
{
char *array = NULL;
unsigned int i;

if (size == 0)
return (NULL);
if (size != 0)
{
array = (char *)malloc(size * sizeof(char));
if (array != NULL)
{
for (i = 0; i < size; i++)
array[i] = c;
}
}
return (array);
}

