#include "main.h"

/**
 * _puts_recursion - Prints a string follewd by a new line
 * @s: string
 * Return: On succes 1
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
