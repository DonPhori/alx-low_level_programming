/* include header library */
#include "main.h"

/**
 * _islower - function to to check for lowercase
 * @c: character which will be compared
 * Return: 0 if false and 1 if true
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
