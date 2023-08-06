#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments, followed by a new line
 * @argc: counts the number of arguments
 * @argv: list of Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);
	return (0);
}

