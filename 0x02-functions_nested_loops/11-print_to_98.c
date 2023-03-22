#include"main.h"
#include<stdio.h>

/**
 * print_to_98 - print cnt from n to 98 separated by comma,
 *	followed by space and number should be printed
 *	in order
 *
 * @n: input
*/

void print_to_98(int n)
{
	int cnt;

	if (n > 98)
	{
		for (cnt = n; cnt > 98; --cnt)
		{
			printf("%d, ", cnt);
		}
	} else
	{
		for (cnt = n; cnt < 98; ++cnt)
		{
			printf("%d, ", cnt);
		}
	}
	printf("98\n");
}
