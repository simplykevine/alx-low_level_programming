#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program, followed by name of a program
 * @argc: Count all arguments
 * @argv:number of available Arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
