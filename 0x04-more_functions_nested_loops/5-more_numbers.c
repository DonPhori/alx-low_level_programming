#include "main.h"

/**
 * more_numbers - function to print 0 - 14
 * 10 times
 * Return: void
 */

void more_numbers(void)
{
	int nums;
	int times = 0;

	while (times < 10)
	{
		for (nums = 0; nums <= 14; nums++)
		{
			_putchar(nums + '0');
		}
		_putchar('\n');
		times++
	}
}
