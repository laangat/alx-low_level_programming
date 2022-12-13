#include<stdio.h>
/* other headers go here */
#include<ctype.h>
/** betty style for function main goes here */

/**
 * main - Entry point
 *
 * prints alphabet in lowercase followed by, a
 * newline except q and x
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
