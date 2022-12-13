#include<stdio.h>
/* betty style code of function main goes here */
/**
 * main - Entry point
 *
 * prints hexadecimal numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	int d;

	c = 'a';
	while
		(d < 10) {
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
