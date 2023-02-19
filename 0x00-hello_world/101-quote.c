/* include header files for preprocessor */
#include <unistd.h>

/**
 * main - start of program
 *
 * write() - function to write data out of a buffer
 *
 * Return: 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
