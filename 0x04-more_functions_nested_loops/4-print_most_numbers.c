#include "main.h"

/**
 * print_most_numbers - prints numbers between
 * 0 to 9 ecxept 2 and 4
 *
 * Return: numbers except 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	do {
		for (i = 0; i <= 9; i++)
		{
			_putchar(i + '0');
		}
	while (i != 2 && i != 4)
	}
	_putchar('\n');
}
