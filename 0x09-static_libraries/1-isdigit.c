#include "main.h"

/**
 * _isdigit - checks for a digit 0 - 9
 * @c: c is a variable
 * Return: 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
