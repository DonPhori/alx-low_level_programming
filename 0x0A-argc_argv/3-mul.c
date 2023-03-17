#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 on error
 * 0 on success
 */

int main(int argc, char *argv[])
{
	int times, i, arg_one, arg_two;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		for (i = 0; i < argc; i++)
		{
			if (i == 1)
			{
				arg_one = atoi(argv[i]);
			}
			if (i == 2)
			{
				arg_two = atoi(argv[i]);
			}
		}
	times = arg_one * arg_two;
	printf("%d\n", times);

	return (0);
}
