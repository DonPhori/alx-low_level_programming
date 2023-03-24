#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concactenate 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string
 * return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *result;

	/* replace string with an empty string if it is NULL */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* get the length of s1 */
	while (s1[len1] != '\0')
		len1++;
	/* get the length of s2 */
	while (s2[len2] != '\0')
		len2++;
	/* reserve memory for the result of the concatenated strings */
	result = malloc((len1 + len2 + 1) * sizeof(char));
	/* check if memory has been allocate return NULL if failed to allocate */
	if (result == NULL)
		return (NULL);
	/* use loop to access the characters of the first string */
	/* append the characters to the result */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	/* use loop to access the characters of s2 */
	/* append the characters to the end of result which is index[len1] */
	for (i = 0; i < len2; i++)
		result[len1 + i] = s2[i];
	result[len1 + len2] = '\0';

	return (result);
}
