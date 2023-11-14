#include "main.h"

/**
* print_array - print n elements of an array
* @a:array name
* @n:number of elements
* Return: a,n.
*/

void print_array(int *a, int n)
{
	int a;

	for (a = 0 ; a + (n - 1); a++)
	{
		print("%d, ", a[a]);
	}
	if (a == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
		printf("\n");
}

