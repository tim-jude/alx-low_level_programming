#include "main.h"

/**
 * _strncat - concatenate two strings but add number of bytes
 * @dest: string to be appended
 * @src: string to be concatenated
 * @n: integer
 * Return: new string
 */

char *_strncat(char *dest, char *src, int n)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
