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
	int i, j, x;

	x = 0;
	j = 0;
	for (i = 0; i < size ; i++)
	{
		j = j + a[(i * size) + i];
		x = x + a[(size - 1) * i + size - 1];
	}
	printf("%d, %d\n", j, x);
}
