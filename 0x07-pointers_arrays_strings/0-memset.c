#include "main.h"

/**
 * _memset - function to fill the first n bytes
 * of the memory area pointed to by s
 * with the constant byte b
 * @s: the pointer to the memory
 * @b: the constant byte
 * @n: the first number of bytes
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
