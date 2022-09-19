#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest: A pointer to a char that will be changed
 *
 * @src: A pointer to a char that will be changed
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	dest[j] = '\0';

	return (dest);
}
