#include "main.h"
#include<string.h>

/**
 * puts_half- prints half of a string followed by a new line
 *
 * @str: the string to print from
 *
 * Return: a half string
 */

void puts_half(char *str)
{
	int i;

	int len = strlen(str);

	int start = (len % 2 == 0) ? len / 2:
	(len - 1) / 2;

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
