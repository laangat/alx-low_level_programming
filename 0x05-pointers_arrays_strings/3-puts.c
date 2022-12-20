#include "main.h"

/**
 * _puts - function that prints string followed by a newline
 *
 * @str: string to input
 *  Return: string and newline
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
