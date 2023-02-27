#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: string
 * Return: ..
 */
void rev_string(char *s)
{
	int len = 0, ind = 0;
	char rev;

	while (s[ind++])
	len++;
	for (ind = len - 1; ind >= len / 2; ind--)
	{
	rev = s[ind];
	s[ind] = s[len - ind - 1];
	s[len - ind - 1] = rev;
	}
}
