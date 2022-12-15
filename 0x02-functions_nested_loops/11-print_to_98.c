#include<stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural numbers from a to 98
 *
 * @a: number to start printing from
 *
 * Return: natural numbers from a to
 * 98
 */

void print_to_98(int a)
{
	if (a >= 98)
	{
		while (a > 98)
			printf("%d, ", a--);
		printf("%d\n", a);
	}
	else
	{
		while (a < 98)
			printf("%d, ", a++)
		printf("%d\n", a);
	}
}
