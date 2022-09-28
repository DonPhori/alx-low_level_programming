#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to a string
 */

void _puts_recursion(char *s)
{
	char *x = s;

	if (*x != '\0')
	{
		_putchar(*x);
		x++;
		_puts_recursion(x);
	} else
	{
		_putchar('\n');
	}
}
