#include "main.h"

/**
 * swap_int - swaps two integer vlues
 *
 * @a: first variable
 * @b: second variable
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;
	*b = temp;
}
