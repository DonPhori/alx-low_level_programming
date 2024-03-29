#include <stdio.h>
#include <stdlib.h>

/**
 * main - Start of program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success and 1 on error
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i, j, num;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		/* use nested loop to iterate through all arguments */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/* check if argument is not a digit */
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		/* convert argument to an int */
		num = atoi(argv[i]);
		/* check if number is negative */
		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		/* add num to the sum */
		sum = sum + num;
	}
	/* print the total sum */
	printf("%d\n", sum);
	return (0);
}
