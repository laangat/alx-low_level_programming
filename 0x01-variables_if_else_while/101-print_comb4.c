#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * prints all combination of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (c != d && d != e && d < c)
			{
				putchar('0' + e);
				putchar('0' + d);
				putchar('0' + c);

				if (c + d + e != 9 + 8 + 7)
				{
					putchar('.');
					putchar(' ');
				}
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
