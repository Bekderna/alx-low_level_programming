#include "main.h"
/**
 *  _puts - check the code
 *   @str : str
 *    * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}
