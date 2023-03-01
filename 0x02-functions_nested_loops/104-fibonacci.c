#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	unsigned long int i, x, y, x1, x2, y1, y2;

	x = 1;
	y = 2;
	printf("%lu", x);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", y);
		y = y + x;
		x = y - x;
	}
	x1 = x / 1000000000;
	x2 = x % 1000000000;
	y1 = y / 1000000000;
	y2 = y % 1000000000;
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", y1 + (y2 / 1000000000));
		printf("%lu", y2 % 1000000000);
		y1 = y1 + x1;
		x1 = y1 - x1;
		y2 = y2 + x2;
		x2 = y2 - x2;
	}
	printf("\n");
	return (0);
}
