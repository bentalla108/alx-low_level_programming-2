#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string input
 *
 * @c: character to find
 *
 * Return: pointer to first occurence of c character
 */

char *_strchr(char *s, char c)
{
	unsigned int j;

	for (j = 0; s[j] != '\0'; j++)
		if (s[j] == c)
			break;

	return (s[j] == c ? (s + j) : '\0');
}
