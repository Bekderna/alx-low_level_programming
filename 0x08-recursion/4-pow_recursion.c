#include "main.h"

/**
 *  *  pow_recursion - check the code
 *   *  @x : srt
 *      *@y : num    *
 *       *       *    * Return: void
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	return (factorial(y - 1) * x);
}

