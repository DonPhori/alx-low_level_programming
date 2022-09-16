#include "main.h"

/**
 * print_square - prints a squarein the terminal
 * @size: size is an integer given by main
 * Return: 0
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (a = size; a > 0; a--)
	{
		for (b = size; b > 0; b--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
