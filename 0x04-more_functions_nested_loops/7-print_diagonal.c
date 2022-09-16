#include "main.h"

/**
 * print_diagonal - prints a diagonal line in the terminal
 * @n: n is an integer
 * Return: 0
 */

void print_diagonal(void)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < n; a++)
	{
		for (b = n - a; b < n; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
