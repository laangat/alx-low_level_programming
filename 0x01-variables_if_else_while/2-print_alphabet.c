#include<stdio.h>
/* more headers goes there */
#include<ctype.h>
/* betty style doc for function main goes here */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
		printf("\n");
	}

	return (0);

}
