#include "main.h"

/**
 * print_most_numbers - function to print numbers from 0 - 9
 * excluding 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int nums;

	for (nums = '0'; nums <= '9'; nums++)
	{
		if (nums != '2' && nums != '4')
		{
			_putchar(nums);
		}
	}
	_putchar('\n');
}
