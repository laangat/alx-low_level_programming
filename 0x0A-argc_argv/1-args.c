#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed
 * to the program
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv; /*ignore argv*/

	printf("%d\n", argc - 1);
	/** argv doesn't include the name of the program, so we're subtracting 1 from argc
	to get the total number of arguments passed to the program.  */

	return (0);
}
