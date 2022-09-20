#include "main.h"
#include <stdio.h>
/**
 * print_last_digit- prints t
 *  @n: num
 *    * Return: int  (Success)
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
