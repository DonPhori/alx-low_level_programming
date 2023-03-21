#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to create and
 * initialize an array dynamically
 * @size: size of the array
 * @c: character which will initialize the array
 * Return: NULL if size = 0
 * return pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	/* allocate memory for the array */
	char *arr = malloc(size * sizeof(char));
	/* make sure memory is allocated */
	if (arr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			/* initialize each element with the specified character */
			arr[i] = c;
		}
	}
	if (size == 0)
	{
		return (NULL);
	}
	return (arr);
}
