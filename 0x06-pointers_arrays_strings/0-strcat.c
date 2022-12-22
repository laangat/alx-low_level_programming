#include "main.h"

/**
 * @strcat - concatenates the string pointed to by @src, including the terminate
 * null byte, to the end of the string pointed by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 */

char *strcat(char *dest, const char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
