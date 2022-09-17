#include "main.h"

/**
 *  * more_numbers - prints 0123456789\n
 *   *
 *    * Return: void
 */

void more_numbers(void)
{
	int x, i;

	for (i = 0; c <= 10; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
				_putchar('1');
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
