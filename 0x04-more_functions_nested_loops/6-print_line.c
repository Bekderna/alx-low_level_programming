#include "main.h"

/**
 *  * print_line - prints 0123456789\n
 *   *@n: num
 *    * Return: void
 */

void print_line(int n)
{
	int x;

	for (x = 0 ; x <= n; x++)
	{
		if (n <= 0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}
