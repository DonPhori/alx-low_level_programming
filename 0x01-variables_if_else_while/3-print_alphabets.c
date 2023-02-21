/* include hearder files */
# include <stdio.h>
/* putchar function is defined in the stdio header library */

/**
 * main - function to print alphabet in lower and then upper case
 * Return: Always 0
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
