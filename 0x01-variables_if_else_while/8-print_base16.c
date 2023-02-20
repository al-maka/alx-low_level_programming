#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char alp;
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (alp = 'a'; alp < 'g'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
