#include <stdio.h>

/**
 * main -  Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char str[26] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 26; x++)
	{
		putchar(str[x]"\n");
	}
	return (0);
}
