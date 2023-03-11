#include "main.h"

/**
 * factorial - function to print factorial of n
 * @n: number
 * Return: -1 on error
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
