#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
