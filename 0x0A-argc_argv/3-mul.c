#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: string to be converted
 *
 * Return: the int converted from the string
 *
 */

int _atoi(char *s)
{
	int i, d, n, len, f, digit;
	/**  These variables are used as counters, flags, and temporary storage throughout the function. */

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	/** finds the lenght of the input string storing it in len variable */

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		/** If a '-' sign is found, the d variable is incremented. */

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			/** If the character is a digit, the digit is converted to its numerical
			value by subtracting '0' from it and stored in the digit variable. */

			if (d % 2)
				digit = -digit;
			/** If the d variable is odd, the digit is negated */

			n = n * 10 + digit;

			f = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;

			f = 0;
		}

	i++;
	}

	if (f == 0)
		return (0);
	return (n);
}


/**
 * main - multiplies two numbers
 *
 * @argc: number of arguments
 *
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 *
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);

	num2 = _atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);

}
