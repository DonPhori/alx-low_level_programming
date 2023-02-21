/* include heade libraries */
#include <stdio.h>

/**
 * main - function to print all possible combinations of single digit numbers
 * Return: Always 0
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '8'; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	return (0);
}
