#include <time.h>
#include <stdio.h>
/**
 *  print_alphabet - prints alphabet
 *    * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char ch;
	int i;

	for (i = 0; 1 < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
	}
		putchar ('\n');
}

