#include "main.h"

/**
 * _memcpy - function to copies n bytes
 * from memory area src to memory area dest
 * @dest: memory area
 * @src: memory source
 * @n: number of bytes
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
