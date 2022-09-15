#include <stdio.h>

/**
 * print_to_98 - Prints all numbers from input to 98,
 *               in order separated by a comma and a space.
 * @n: The number to begin.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
