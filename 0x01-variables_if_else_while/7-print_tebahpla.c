#include <stdio.h>
/**
 * main -  Prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char str[26] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 25; x >= 0; x--)
	{
		putchar(str[x]);
	}
	putchar('\n');
	return (0);
}
