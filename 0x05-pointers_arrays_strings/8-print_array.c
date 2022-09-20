#include <stdio.h>
#include "main.h"

/**
 * print_array - print an array.
 *
 * @n: array's length
 *
 * @a: is the array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
