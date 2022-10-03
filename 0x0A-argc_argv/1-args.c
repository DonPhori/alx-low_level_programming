#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 on success
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = argc;

	sum += atoi(argv[i]);
	printf("%d", sum);
	return (0);
}
