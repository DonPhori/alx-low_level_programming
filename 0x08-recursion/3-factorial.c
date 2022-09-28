#include "main.h"
#include <stdio.h>

/**
 * factorial - Gets the factorial of a given number
 * @n: Integer value
 * Return: 1 is success
 * Error:Return -1 for error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
