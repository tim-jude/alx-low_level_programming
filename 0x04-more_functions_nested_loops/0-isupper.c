#include "main.h"

/**
* _isupper - checks if character is uppercase
* @c: character being checked
* Return: 1 whether it is, 0 it is not
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
