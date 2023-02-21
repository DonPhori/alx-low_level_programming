/* include header libraries */
#include <stdio.h>

/**
 * main - function to print single digit numbers of base 10
 * Return: Always 0
 */

int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
