#include "main.h"

/**
 * print_diagonal - function to draw a diagonal line
 * @n: number of '\' in the line
 */

void print_diagonal(int n)
{
	int i, j, spaces;

	spaces = 0;
	for (i = n; i > 0; i--)
	{
		for (j = spaces; j > 0; j--)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
		spaces++;
	}
	if (spaces < 1)
	{
		_putchar('\n');
	}
}
