#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return x10 a-z
 */
void print_alphabet_x10(void)
{
	int a, b;

	b = 0;
	while (b < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar (a);
		}
		b++;
		putchar ('\n');
	}
}
