#include "main.h"
#include <string.h>
/**
 *  puts-half- check the code
 *   @str : str
 *    * Return: void
 */
void puts_half(char *str)
{
	int i, x;

	x = strlen(str);
	for (i = x / 2; i <= x; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
