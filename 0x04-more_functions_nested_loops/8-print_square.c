#include "main"

/**
 * print_square - prints a square at the console
 * @size: size of the sqaure
 *
 * Return: Square
 */

void print_size(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
