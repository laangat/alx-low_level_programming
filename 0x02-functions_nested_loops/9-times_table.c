#include "main.h"

/**
 * times_table - prints the times table of 9
 *
 * Return: Always 0.
 *
 */

void times_table(void)
{
	int n, result;

	for (n = 0; n <= 9; n++)
	{
		result = 9 * n;
		_putchar('0' + n);
		_putchar('.');
		_putchar(' ');
		_putchar('0' + (result / 10));
		_putchar('0' + (result % 10));
		_putchar('\n');
		}
}
