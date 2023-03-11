#include "main.h"

/**
 * _pow_recursion - function to return the value of an exponent
 * @x: base number
 * @y: exponent
 * Return: exponential value
 * -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
