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
	if (n >= 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("%d\n", n);
	}
	else
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", n);
	}
}
