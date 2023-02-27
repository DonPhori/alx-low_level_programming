#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: the string to print
 */

void print_rev(char *s)
{
	int count;

	while (*(s + count) != '\0')
	{
		count++;
	}
	while (count--)
	{
		_putchar(*(s + (count)));
	}
	_putchar('\n');
}
