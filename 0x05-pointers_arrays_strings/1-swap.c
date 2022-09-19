#include "main.h"

/**
 * swap_int - swap the valuses of two integers a and b
 *
 * @y: A pointer to an int that will be updated
 *
 * @z: B pointer to an int that will be updated
 *
 * Return: void that means our answer is correct
 */

void swap_int(int *y, int *z)
{
	int x;

	x = *y;
	*y = *z;
	*z = x;
}
