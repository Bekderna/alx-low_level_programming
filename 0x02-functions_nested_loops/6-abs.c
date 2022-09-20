#include "main.h"
#include <stdio.h>
/**
 * _abs- prints alphabet
 *  @n: num
 *    * Return: int  (Success)
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * (-1);
		return (n);
	}
}
