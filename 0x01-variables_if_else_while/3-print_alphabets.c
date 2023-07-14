#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	int d;

	c = 'a';
	d = 'A';

	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
