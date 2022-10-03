#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 is success
 * Exit: exit_success = no errors
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i])
	}
	exit(EXIT_SUCCESS);
}
