#include "main.h"

/**
 *_isupper - Checks for uppercase character.
 *@c: checked
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
