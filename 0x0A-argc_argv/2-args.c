#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments it receives, one per line
 * @argc: number of commandline arguments
 * @argv: list of commandline arguments
 * Return: 0 Always(success)
 */
int main(int argc, char **argv)
{
	/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - Print each arguments*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
