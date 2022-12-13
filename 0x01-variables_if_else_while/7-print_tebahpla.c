#include<stdio.h>
/* betty style code of function main goes here */
/**
 * main - Entry point
 *
 * Prints alphabets in lowercase and in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
