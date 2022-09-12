#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;
	char h;

	for (c = 0 ; c <= 9 ; c++)
	{
		putchar(c + '0');
	}
		for (h = 'a' ; h >= 'f' ; h++)
		{
			putchar(h);
		}
	putchar('\n');
	return (0);
}
