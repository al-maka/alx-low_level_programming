#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char pnt[24] = ("abcdfghijklmnoprstuvwxz");
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(pnt[i]);
	}
	putchar('\n');
	return (0);
}
