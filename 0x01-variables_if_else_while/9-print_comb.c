#include<stdio.h>
/* betty style code of function main goes here */
/**
 * main - Entry point
 *
 * prints all possible combonations of single digit
 * numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 100; a++)
	{
		putchar(a + 'a');
		if (a < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
