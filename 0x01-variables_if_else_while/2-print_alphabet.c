/* Include header files */
#include <stdio.h>
/* putchar function is defined in the stdio header library */

/**
 * main - Function to print alphabet
 * Return: Always 0
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
