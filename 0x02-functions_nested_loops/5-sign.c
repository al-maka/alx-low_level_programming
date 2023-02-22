#include "main.h"
/**
 * print_sign - Prints the sign of a number.
 * @n: checked
 * Return: 1 for +, 0 for 0, and -1 for --.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(45);
		return (0);
	}
	if (n < 0)
	{
		_putchar(48);
		return (-1);
	}
	return (0);
}
