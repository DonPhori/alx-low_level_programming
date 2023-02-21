/* include header libraries */
#include <stdio.h>

/**
 * main - function to print alphabet in lowercase, exluding q and e
 * Return: Always 0
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
