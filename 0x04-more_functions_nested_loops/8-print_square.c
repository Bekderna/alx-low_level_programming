#include "main.h"

/**
 *  * print_square - prints 0123456789\n
 *   *@size: num
 *    * Return: void
 */
void print_square(int size)
{
	int x, i;

	if (size <= 0)
		_putchar('\n');
	for (x = 0 ; x < size; x++)
	{
		for (i = 0; i < size; i++)
			_putchar('#');
		_putchar('\n');
	}

}
