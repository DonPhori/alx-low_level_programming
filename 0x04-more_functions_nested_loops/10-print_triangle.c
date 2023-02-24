#include "main.h"

/**
 * print_triangle - function to print a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j, k, spaces;

	spaces = (size - 1);
	for (i = 1; i <= size; i++)
	{
		for (j = spaces; j > 0; j--)
		{
			_putchar(' ');
		}
		for (k = i; k > 0; k--)
		{
			_putchar('#');
		}
		_putchar('\n');
		spaces--;
	}
	if (size < 1)
	{
		_putchar('\n');
	}
}
