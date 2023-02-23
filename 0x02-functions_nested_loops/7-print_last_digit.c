/* include header library containing prototypes */
#include "main.h"

/**
 * print_last_digit - function to print the last digit of a number
 * @n: number to be processed
 * Return: Value of the last digit
 */

int print_last_digit(int n)
{
	int a = n % 10;

	if (n < 0)
	{
		a = a * -1;
	}
	_putchar(a + '0');
	return (a);
