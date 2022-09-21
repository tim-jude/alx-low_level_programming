#include "main.h"
/**
* _strncpy - copies a string including
* terminating null byte, using input bytes
* if length of source string is less than maximum byte number the
* remainder is filled with null bytes
* work like strncpy
* @dest: store string copy
* @src: source string
* @n: maximum bytes
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{

	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
