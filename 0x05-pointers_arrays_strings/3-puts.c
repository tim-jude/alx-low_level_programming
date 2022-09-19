#include <stdio.h>
#include "main.h"

/**
 * _puts - print string
 * @str: string
 *
 * Description: print string
 * Return: no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
