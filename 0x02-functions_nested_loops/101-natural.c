#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a =  0, b = 0, c = 0;
	int i;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			a = a + i;
		}
		else if ((i % 5) == 0)
		{
			b = b + i;
		}
	}
	c = b + a;
	printf("%lu\n", c);
	return (0);
}
