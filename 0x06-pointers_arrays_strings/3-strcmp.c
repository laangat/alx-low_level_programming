#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: pointer to the first string ro be compared.
 * @s2: Pointer to second string to compare.
 *
 * Return: if str1 < str2, the negative difference of the first unmatched char
 * if str1 == str2, 0.
 * if str1 > str2, the positive differce of the first unmatched char.
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
