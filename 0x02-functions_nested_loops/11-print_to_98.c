#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print natural numbers
 * @n: number passed to function
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
		{
			n--
		}
		else if (n < 98)
		{
			n++
		}
	}
	printf("%i\n", 98);
}
