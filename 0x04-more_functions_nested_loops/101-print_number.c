#include "main.h"
#include <stdio.h>
/**
 * print_number - print
 * @n: integer
 * Return: empty
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
	n *= -1;
	i = n;
	_putchar('-');
	}
	i /= 10;
	if (i != 0)
	print_number(i);
	_putchar((unsigned int) n % 10 + '0');
}
