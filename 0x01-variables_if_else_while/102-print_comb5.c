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

	for (c = 0 ; c <= 99 ; c++)
	{
		for (ch = c + 1 ; ch <= 99 ; ch++)
	{
		putchar((c / 10) + '0');
		putchar((c % 10) + '0');
		putchar((ch / 10) + '0');
		putchar((ch % 10) + '0');
		if (c == 99 && ch == 99)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
