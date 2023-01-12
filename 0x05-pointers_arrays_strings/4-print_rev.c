#include "main.h"
#include<string.h>

/**
 * print_rev - prints a reverse string
 * @s: input string
 *
 * Return: a string in reverse
 */

void print_rev(char *s)
{
	int len = strlen(s);

	for (int i = len - 1; i >= '\0'; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
