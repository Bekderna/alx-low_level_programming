#include "main.h"

/**
 *  *  *_puts_rev_recursion - check the code
 *   *  @s : srt
 *      *      *
 *       *       *    * Return: void
*/
void _puts_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_rev_recursion(s + 1);
	_putchar(*s);
	
}

