#include "main.h"

/**
 *is_prime_number - check the code
 *   *  @n : srt
 *      *      *
 *       *       *    * Return: void
*/
int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (n == 0)
		return (1);
	return (is_prime_number(n - 1) * n);
}

