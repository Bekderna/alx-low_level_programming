#include "main.h"
/**
 *  print_array - check the code
 *   @a : str
 *   @n : num
 *    * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf(a[i]);
		if (i != n)
			printf(", ");
	}
	_putchar('\n');
}
