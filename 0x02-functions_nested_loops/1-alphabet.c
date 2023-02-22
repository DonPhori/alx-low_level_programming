/* include header library */
#include "main.h"

/**
 * print_alphabet - function used to print alphabet
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
