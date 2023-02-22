/* include header library */
#include "main.h"

/**
 * print_alphabet_x10 - function to print alphabet 10 times
 * print_alphabet - function to print alphabet
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count <= 9)
	{
		print_alphabet();
		count++;
	}
}
