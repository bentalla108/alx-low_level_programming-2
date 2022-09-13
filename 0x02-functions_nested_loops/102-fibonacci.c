#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, 
 * starting with 1 and 2 followed by a new line
 * Return: 0
 */
int main(void)
{
	int c = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%lu, ", i);
	while (c <= 50)
	{
		if (c == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		k = j;
		j += i;
		i = k;
		c++;
	}

	return (0);
}
