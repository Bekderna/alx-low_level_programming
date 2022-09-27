#include "main.h"
#include <stdio.h>

/**
 *  *  print_diagsums- check the code
 *    *   @a : str
 *     @size : num
 *       *    * Return: void
 */
void print_diagsums(int *a, int size)
{
	unsigned int i, j;

	for (i = 0; i < size ; i++)
	{
		j = j + a[(i * size) + i];
		x = x + a[siza * i + size - i];
	}
	printf("%d %D", x, j);
}
