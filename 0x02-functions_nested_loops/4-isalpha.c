#include <time.h>
#include <stdio.h>
/**
 *  _isalpha - prints alphabet
 *  @c: num
 *    * Return: int  (Success)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
