#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *sto;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	sto = (char *)malloc(sizeof(char) * (i + 1));

	if (sto == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		sto[j] = str[j];
	return (sto);
}
