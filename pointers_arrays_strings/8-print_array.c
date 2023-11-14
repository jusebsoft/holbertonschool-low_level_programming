#include "main.h"

/**
* print_array - print n elements of an array
* @a:array name
* @n:number of elements
* Return: a,n.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < (n - 1); i++)
	{
		print("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
		printf("\n");
}
