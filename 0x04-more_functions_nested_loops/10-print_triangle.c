#include "main.h"

/**
 * print_triangle - prints a triangle on terminal
 * @size: size is an integer by main
 * Return: 0
 */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = 0; a < size; a++)
	{
		for (b = size - a - 1; b > 0; b--)
		{
			_putchar(' ');
		}
		for (b = a + 1; b > 0; b--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
