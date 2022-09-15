#include "main.h"

/**
* _isdigit - check if character is a digit or not
* @c: character being checked
* Return: 1 if it is, 0 if not
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
