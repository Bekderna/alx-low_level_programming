#include "main.h"

/**
 *  *  *_puts_recursion - check the code
 *   *  @s : srt
 *      *      *
 *       *       *    * Return: void
*/
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
		return (void);
	_puts_recursion(s + 1);
}

