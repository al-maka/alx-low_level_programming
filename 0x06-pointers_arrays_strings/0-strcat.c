#include "main.h"
#include <stdio.h>
/**
 * _strcat - function that concatenates two strings.
 * @dest: ..
 * @src: ..
 * Return: ..
 */
char *_strcat(char *dest, char *src)
{
	int dl = 0;
	int i;

	while (dest[dl])
	{
		dl++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dl] = src[i];
		dl++;
	}
	dest[dl] = '\0';
	return (dest);
}
