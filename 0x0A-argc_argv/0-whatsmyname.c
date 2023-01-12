#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the code.
 * @argc: argumet count.
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	/**argv is used to accces the firsta element of the array
	which is the first command-line argument passed */

	return (0);

}
