#include <stdio.h>
#include <math.h>
/**
 * main - print
 * Return: 0
 */
int main(void)
{
	long x, y;
	long num = 612852475143;
	double sq = sqrt(num);

	for (x = 1; x <= sq; x++)
	{
		if (num % x == 0)
		{
			y = num / x;
		}
	}
	printf("%ld\n", y);
	return (0);
}

