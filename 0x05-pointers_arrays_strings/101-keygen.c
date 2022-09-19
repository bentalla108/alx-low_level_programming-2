#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 *
 * Return: 0.
 */

int main(void)
{
	int s = 0, d = 0;
	time_t x;

	srand((unsigned int) time(&x));
	while (d < 2772)
	{
		s = rand() % 128;
		if ((d + s) > 2772)
			break;
		d = d + s;
		printf("%c", s);
	}
	printf("%c\n", (2772 - d));
	return (0);
}
