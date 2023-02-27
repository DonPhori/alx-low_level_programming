#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - print a string in reverse
 * @s: the string to print
 */

void print_rev(char *s)
{
	int i, len, temp;

	 len = strlen(s);
	 for (i = 0; i < len/2; i++)
	 {
		 temp = s[i];
		 s[i] = s[len - i - 1];
		 s[len - i - 1] = temp;
	 }
}
