#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the sum of all the multiples of
 *	3 or 5 below 1024
 * Return: Always 0 (Success)
*/

int main(void)
{
	int total = 0;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			total += i;
		}
	}
	printf("%d\n", total);
	return (0);
}
