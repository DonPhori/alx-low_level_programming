#include "main.h"

/**
 * print_square - function to print a square
 * @size: size of the square
 */

void print_square(int size)
{
	int i, row;

	for (row = size; row > 0; row--)
	{
		for (i = size; i > 0; i--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
	{
		_putchar('\n');
	}
}
