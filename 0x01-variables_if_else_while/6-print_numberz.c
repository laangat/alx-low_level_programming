#include<stdio.h>
/* betty style doc for function main goes here */
/**
 * main - Entry point
 *
 * prints numbers using putchar without using type char
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	x = 0;
	while
		(x < 10) {
			putchar(x + '0');
			x++;
		}
	putchar('\n');
	return (0);
}
