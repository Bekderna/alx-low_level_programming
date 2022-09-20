#include <time.h>
#include <stdio.h>
/**
 * print_sign- prints alphabet
 *  @n: num
 *    * Return: int  (Success)
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return ("-1");
	}
	else
	{
		putchar(-1);
		return (0);
	}
}
