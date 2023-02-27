#include <stdio.h>
/**
 * swap_int - function that swaps the values of two integers.
 * @a: integer
 * @b: integer
 * Return: empty
 */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
