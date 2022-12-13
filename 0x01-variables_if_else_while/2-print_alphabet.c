#include<stdio.h>
/* more headers go here */
#include<ctype.h>
/*betty style for doc function goes here */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int x;

	for (int x = 'A'; x <= 'Z'; x++)
	{

		int lower_x = tolower(x);

		putchar(lower_x);


	}

printf("%c\n", x);

}
