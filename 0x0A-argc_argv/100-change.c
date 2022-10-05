#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: argument vector
 * Return: Always 0 on success and 1 on error
 */

int main(int argc, char **argv)
{
	int cents;
	int coins;
	int remainder;

	int quarters, dimes, nickels, twos, pennies;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
	}
	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	quarters = cents / 25;
	remainder = cents % 25;
	dimes = remainder / 10;
	remainder = remainder % 10;
	nickels = remainder / 5;
	remainder = remainder % 5;
	twos = remainder / 2;
	remainder = remainder % 2;
	pennies = remainder / 1;

	coins = quarters + dime + nickels + twos + pennies;

	printf("%d\n", coins);
	return (0);
}
