#include "main.h"

/**
 * more_numbers - function to print 0 - 14
 * 10 times
 * Return: void
 */

void more_numbers(void)
{
	int nums;
	int lines;

	for (lines = 0; lines < 10; lines++)
	{
		for (nums = 0; nums < 15; nums++)
		{
			d = nums / 10;
			u = nums % 10;
			if (d != 0)
			{
				_putchar(d + '0');
			}
			_putchar(u + '0');
		}
		_putchar('\n');
	}
}
