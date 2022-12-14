#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int t;
	char x;

	for (t = 0; t <= 9; t++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
	}

	_putchar('\n')
}
