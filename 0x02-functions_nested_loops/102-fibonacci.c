#include"main.h"
#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int cnt;
	unsigned long i = 0, n = 1, t;

	for (cnt = 0; cnt < 50; ++cnt)
	{
		t = i + n;
		printf("%lu", t);

		i = n;
		n = t;

		if (cnt == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
