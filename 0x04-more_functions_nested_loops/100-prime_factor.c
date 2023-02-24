#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 * Return: 0 on success
 */

int main(void)
{
	long int num = 612852475143;
	long int factor = 2;

	while (num)
	{
		if (num / factor > 0 && num % factor == 0)
		{
			num /= factor;
		}
		else if (num / factor > 0 && num % factor != 0)
		{
			factor++;
		}
		else
		{
			break;
		}
	}
	printf("%ld\n", factor);
	return (0);
}
