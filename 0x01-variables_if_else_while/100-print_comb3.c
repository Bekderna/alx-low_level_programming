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

	for (c = 0 ; c <= 9 ; c++)
	{
		for (ch = c + 1 ; ch <= 9 ; ch++)
	{
		putchar((c * 10) + ch + '0');
		if (c == 8)
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
