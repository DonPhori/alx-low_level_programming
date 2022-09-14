#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char *print = "_putchar";

	while (*print)
	{
		putchar(*print);
		print++;
	}
	putchar('\n');
	return (0);
}
