#include "main.h"
/**
 *  reverse_array - check the code
 *   @a : array
 *   @n : num
 *
 *    * Return: int
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; a[i] > (n / 2); i++)
	{
		j = a[n - i - 1];
		a[n - i - 1] = a[i];
		a[i] = j;
	}
}
