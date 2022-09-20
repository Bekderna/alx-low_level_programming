#include <time.h>
#include <stdio.h>
/**
 *  _islower - prints alphabet
 *  @c: num
 *    * Return: int  (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
