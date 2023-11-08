#include "main.h"
#include <stdio.h>

/**
* print_to_98 - imprimir numeros del n al 98
* @n: number to start from
* Description: funcion para imprimir numeros desde la n al 98
* Return: void.
*/

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		 for (i = n ; i >= 98 ; i--)
		 {
			 printf("%d", i);
			 if (i != 98)
				 printf(", ");
		 }
		 printf("\n");
	}
	else if (n == 98)
		printf("%d\n", n);
}
