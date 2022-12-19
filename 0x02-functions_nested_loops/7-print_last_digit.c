#include "main.h"


/**
 * print_last_digit - prints the last digit of a number
 *
 * @y: the number
 *
 * Return: The value of the last digit
 */

int print_last_digit(int y)
{
	int x = y % 10;

	if (x < 0)
		x *= -1;

	 _putchar(x + '0');

	return (0);
}
