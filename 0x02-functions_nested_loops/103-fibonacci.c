#include"main.h"
#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the sum of even-valued
 *		Fibonacci sequence not exceed
 *		4million
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long f1 = 0, f2 = 1, sm;
	float tsm;

	while (1)
	{
		sm = f1 + f2;

		if (sm > 4000000)
			break;

		if ((sm % 2) == 0)
			tsm += sm;

		f1 = f2;
		f2 = sm;
	}
	printf("%.0f\n", tsm);

	return (0);
}
