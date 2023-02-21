/* include header library */
#include <stdio.h>

/**
 * main - function to print alphabet in reverse order
 * Return: Always 0
 */

int main(void)
{
	int alpha;

	for (alpha = 122; alpha >= 97; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
