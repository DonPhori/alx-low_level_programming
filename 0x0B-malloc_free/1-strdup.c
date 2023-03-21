#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function to duplicate a string
 * @str: string to be duplicated
 * Return: NULL if str = null
 * return pointer to to str
 */

char *_strdup(char *str)
{
	/* initialize string length to 0 */
	unsigned int length = 0;
	unsigned int i;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	/* get the length of str */
	while (str[length] != '\0')
	{
		length++;
	}
	/* allocate memory for the new str */
	new_str = malloc(length + 1);
	/* make sure memory was allocated */
	if (new_str != NULL)
	{
		for (i = 0; i < length; i++)
		{
			new_str[i] = str[i];
		}
	}
	return (new_str);
}
