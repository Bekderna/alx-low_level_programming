#include "main.h"

/**
 *  *  factorial - check the code
 *   *  @n : srt
 *      *      *
 *       *       *    * Return: void
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	return (factorial(n - 1) * n);
}

