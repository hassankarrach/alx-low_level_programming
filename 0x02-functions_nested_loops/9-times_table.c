#include"main.h"

/**
 * times_table - prints the 9 times table
 *
*/

void times_table(void)
{
	int n, i, j;

	for (n = 0; n <= 9; ++n)
	{
		_putchar(48);

		for (i = 1; i <= 9; ++i)
		{
			_putchar(',');
			_putchar(' ');

			j = n * i;

			if (j <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((j / 10) + 48);
			}

			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}
