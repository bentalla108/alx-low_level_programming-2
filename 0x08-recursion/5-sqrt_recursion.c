#include "main.h"

/**
 * _evaluate - evaluate function sqrt
 *
 * @i: interger
 *
 * @n: interger
 *
 * Return: evaluate sqrt
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
