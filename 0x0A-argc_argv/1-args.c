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
	(void)argv;
	argc--;

	printf("%d", argc);
	return (0);
}
