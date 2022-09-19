#include <stdio.h>
#include "main.h"

/**
 * puts_half - print string
 * @str: string to print
 * 
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}

/**
* _strlen - returns string length
* @s: string
*
* Return: length of string
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
