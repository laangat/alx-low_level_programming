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

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
