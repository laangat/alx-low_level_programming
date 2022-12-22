#include "main.h"

/**
 * strcat - concatenates the string pointed to by @src, including the terminat
 * null byte, to the end of the string pointed by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *strcat(char *dest, const char *src)
{
	size_t i, j;

	for (i = 0; dest[i] != '\0'; i++)
		 ;
	for (j = 0; src[j] != '\0'; j++)
			dest[i + j] = src[j];
	 dest[i + j] = '\0';

	return (dest);
}
