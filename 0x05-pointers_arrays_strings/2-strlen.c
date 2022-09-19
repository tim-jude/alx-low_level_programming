#include "main.h"

/**
 * _strlen - returns string length
 * @s: string
 * Return: length as integer;
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
