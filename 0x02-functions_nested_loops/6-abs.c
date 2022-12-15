#include "main.h"

/**
 * int_abs(int) - prints the absolute value of an integer
 *
 * @int: the number which to be tested
 *
 * Return: Absolute value.
 */

int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (-x);
	}
}
