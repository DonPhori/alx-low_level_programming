#include "main.h"
#include <stdio.h>

/**
 *print_array - prints n elements in the array a
 *@a: array to print
 *@n: number of elements to print
 *Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if (i != (n - 1))
		{
			printf("%i, ", a[i]);
		}
		else
		{
			printf("%i", a[i]);
		}
		i++;
	}
	printf("\n");
}
