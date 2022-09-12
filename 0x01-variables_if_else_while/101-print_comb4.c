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
	int ch;
	int a;

	for (c = 0 ; c <= 9 ; c++)
	{
		for (a = c + 1 ; a <= 9 ; a++)
		{
			for (ch = a + 1 ; ch <= 9 ; ch++)
			{
		putchar(c + '0');
		putchar(a + '0');
		putchar(ch + '0');
		if (c == 7)
		{
			break;
		}
		putchar(',');
		putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
