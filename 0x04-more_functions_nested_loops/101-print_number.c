#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: integer to print
 */

void print_number(int n)
{
	unsigned int pc, i, z, nmodul, a;

	if (a == 0)
		_putchar('0');
	/* if a is negative we make it positive*/
	if (n < 0)
	{
		a = -n;
		_putchar('-');
	}
	else
		a = n;
	if (a < 10 && a > 0)
		_putchar(a + '0');
	while (a >= 10)
	{
		pc = a;
		z = 0;
		nmodul = 0;
		for (i = 0; pc >= 10; i++)
		{
			if (pc / 10 > 0 && pc % 10 == 0)
				z++;
			else
				z = 0;
			pc /= 10;
			nmodul =  (nmodul) ? nmodul * 10 : 10;
		}
		_putchar(pc + '0');
		while (z-- > 0)
			_putchar('0');
		a %= nmodul;
		if (a > 0 && a < 10)
			_putchar(a + '0');
	}
}
