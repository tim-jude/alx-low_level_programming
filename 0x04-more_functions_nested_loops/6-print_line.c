#include <stdio.h>
#include "main.h"

/**
* print_line - print a srtaight line
* @n: parameter
* Return: nothing
*/

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
