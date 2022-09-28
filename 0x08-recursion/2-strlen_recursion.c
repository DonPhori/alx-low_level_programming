#include "main.h"

/**
 * _strlen_recursion - Returns the string length.
 * @s: a pointer to a string.
 * Return: 0 on success
 * On error, -1 is returned, and errno is set appropriately
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
