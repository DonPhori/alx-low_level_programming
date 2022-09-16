#include "main.h"

/**
 * print_line -Draws a straight line in the terminal
 *@n: n is an integer
 * Return: 0
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
