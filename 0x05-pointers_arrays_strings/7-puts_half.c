#include "main.h"
#include <string.h>
/**
 *  puts_half- check the code
 *   @str : str
 *    * Return: void
 */
void puts_half(char *str)
{
	int i, x;

	x = strlen(str);
	if (x % 2 = 1)
		x--;
	for (i = x / 2; i <= (x - 1); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
