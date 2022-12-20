#include "main.h"

/**
 * print_rev - prints a reverse string
 * @s: input string
 *
 * Return: a string in reverse
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)

	for (i = i - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
