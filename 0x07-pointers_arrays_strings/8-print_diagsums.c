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

	for (i = 0; i < size ; i++)
	{
		j = j + a[(i * size) + i];
		x = x + a[(size - 1) * i + size - i];
	}
	printf("%d, %d", x, j);
}
