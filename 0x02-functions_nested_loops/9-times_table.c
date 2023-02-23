/* include header library */
#include "main.h"

/**
 * times_table - function to print the multiplication table starting from 0 up to 9
 */

void times_table(void)
{
	int m;
	int n;
	int a = n * m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			_putchar(a);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}	
