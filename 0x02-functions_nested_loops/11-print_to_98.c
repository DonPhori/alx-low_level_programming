#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print natural numbers
 * @A: number passed to function
 *
 * Return: 1 on success
 * On error, -1 is returned, and errno is set appropriately
 */
void print_to_98(int A)
{

	while (A != 98)
	{
		printf("%i, ", A);
		if (A > 98)
		{
			A--;
		}
		else if (A < 98)
		{
			A++;
		}
	}
	printf("%i\n", 98);
}
