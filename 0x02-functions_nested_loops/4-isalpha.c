/* include heade library containing prototypes */
#include "main.h"

/**
 * _isalpha - function to compare if a character is in uppercase or not
 * @c: character to be compared
 * Return: 1 if True 0 if False
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
