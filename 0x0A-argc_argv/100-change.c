#include <stdio.h>
#include <stdlib.h>

int change(int cents);

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc < 0)
	{
		return (0);
	}
	printf("%d\n", change(atoi(argv[1])));
	return (0);
}
