#include "main.h"

/**
 *_sqrt_recursion - check the code
 *   *  @n : srt
 *      *      *
 *       *       *    * Return: void
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	return (_sqrt_recursion(n - 1) * n);
}

