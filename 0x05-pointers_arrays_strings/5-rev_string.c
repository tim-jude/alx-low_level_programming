#include <stdio.h>
#include "main.h"

/**
* rev_string - reverse string
* @s: string being reversed
*
* Return: nothing
*/

void rev_string(char *s)
{
	int i, tmp, len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = tmp;
	}
}

/**