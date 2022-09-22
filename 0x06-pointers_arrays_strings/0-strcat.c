#include "main.h"

/**
 * _strcat - concatenates strings
 * @dest: the first string to be added
 * @src: the second string to be concatenated
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	for (; ptr != '\0'; ptr++)
		;
	for (; *src != '\0'; src++)
	{
		*ptr = *src;
		ptr++;
	}
	*ptr = *src;
	return (dest);
