#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char pnt;

	for (pnt = 'a'; pnt < 'z'; pnt++)
		putchar(pnt);
	for (pnt = 'A'; pnt < 'Z'; pnt++)
		putchar(pnt);
	putchar('\n');
	return (0);
}
