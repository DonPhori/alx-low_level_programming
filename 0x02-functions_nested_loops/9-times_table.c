/* include header library */
#include "main.h"

/**
 * times_table - function to print the multiplication table starting from 0 up to 9
 */

void times_table(void)
{
	int m;
	int n;
	int a;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			a = n * m;
			if (a <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
