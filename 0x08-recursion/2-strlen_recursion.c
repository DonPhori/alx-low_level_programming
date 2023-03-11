#include "main.h"

/**
 * _strlen_recursion - function to print string length
 * @s: String
 * Return: 0 on success
 * and 1 if need to continue
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	_strlen_recursion(s + 1);
}
