#include "main.h"

/**
 *  * print_square - prints 0123456789\n
 *   *@size: num
 *    * Return: void
 */
void print_square(int size)
{
	int x;

	for (x = 0 ; x < size; x++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
