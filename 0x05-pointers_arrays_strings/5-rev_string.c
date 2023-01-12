#include "main.h"
#include<string.h>

/**
 * rev_string - reverses string
 * @s: the string
 *
 * Return: a reversed string
 */

void rev_string(char *s)
{
	int len = strlen(s);

	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

}
