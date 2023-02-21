/* include header libraries */
#include <stdio.h>

/**
 * main - Function to print all base 16 numbers in lowercase
 * Return: Always 0
 */

int main(void)
{
	char hex;

	for (hex = '0'; hex <= '9'; hex++)
	{
		putchar(hex);
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
