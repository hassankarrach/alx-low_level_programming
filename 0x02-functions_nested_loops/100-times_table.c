#include"main.h"

/**
 * print_times_table - prints time table of input
 *
 * @input: takes number input
*/

void print_times_table(int input)
{
	int i, n, j;

	if (input <= 15 && input >= 0)
	{
		for (n = 0; n <= input; ++n)
		{
			_putchar(48);
			for (j = 1; j <= input; ++j)
			{
				_putchar(',');
				_putchar(' ');

				i = n * j;

				if (i <= 9)
					_putchar(' ');
				if (i <= 99)
					_putchar(' ');

				if (i >= 100)
				{
					_putchar((i / 100) + 48);
					_putchar((i / 10) % 10 + 48);
				} else if (i <= 99 && i >= 10)
					_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
