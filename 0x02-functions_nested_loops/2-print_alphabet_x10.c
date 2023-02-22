/* include header library */
#include "main.h"

/**
 * print_alphabet_x10 - function to print alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char alpha = 'a';

	while (count++ <= 9)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
