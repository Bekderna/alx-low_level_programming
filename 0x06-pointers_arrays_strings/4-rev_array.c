#include "main.h"
#include <stdio.h>
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

	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j; 
	}
}
