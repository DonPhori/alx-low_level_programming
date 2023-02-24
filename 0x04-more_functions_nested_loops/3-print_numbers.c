#include "main.h"

/**
 * print_numbers - function to print numbers from 0 - 9
 * Return: void
 */

void print_numbers(void)
{
	int nums;

	for (nums = '0'; nums <= '9'; nums++)
	{
		_putchar(nums);
	}
	_putchar('\n');
}
