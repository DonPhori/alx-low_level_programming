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
	for (i = 0; i < n; i++)
	{
		for (j = n - i; j < n; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
