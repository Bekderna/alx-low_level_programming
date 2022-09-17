#include "main.h"

/**
 *  * print_diagonal- prints 0123456789\n
 *   *@n: num
 *    * Return: void
 */

void print_diagonal(int n)
{
	int x, i;

	if (n <= 0)
		_putchar('\n');
	for (x = 0 ; x < n; x++)
	{
		for (i = 0; i < x; i++)
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
