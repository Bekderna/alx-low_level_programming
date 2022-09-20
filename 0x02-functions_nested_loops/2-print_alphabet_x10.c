#include <time.h>
#include <stdio.h>
/**
 *  print_alphabet_x10 - prints alphabet
 *    * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
			putchar('\n');
		}
	}
}

