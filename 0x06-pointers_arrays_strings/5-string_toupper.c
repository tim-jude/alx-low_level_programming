#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @str - string 
 *
 * Return: string add
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;

	}
	return (str);
}
