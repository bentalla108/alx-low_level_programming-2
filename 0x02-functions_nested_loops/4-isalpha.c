#include "main.h"

/**
 * _isalpha -Return 1 if c is a letter. lowercase or upercase
 *
 * @c: The int to print
 *
 * Return: Always 0.
 */
int _isalpha(int a)

{
	if((a > 'a' && a < 'z') || (a > 'A' && a < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
