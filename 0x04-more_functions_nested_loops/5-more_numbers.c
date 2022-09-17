#include "main.h"

/**
 *  * more_numbers - prints 0123456789\n
 *   *
 *    * Return: void
 */

void more_numbers(void)
{
	char c;
	int i;

	for (i = 0; c <= 10; i++)
	{
		for (c = '0'; c <= '9'; c++)
			_putchar('c');
		for (c = '0'; c <= '4'; c++)
			_putchar('1', 'c');
		_putchar('\n');
	}
}
