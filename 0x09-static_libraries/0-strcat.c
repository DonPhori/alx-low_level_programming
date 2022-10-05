#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: the first string to be added
 * @src: the second string to be concatenated
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dl = 0;

	while (dest[i++])
	{
		dl++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[dl++] = src[i];
	}
	return (dest);
}
