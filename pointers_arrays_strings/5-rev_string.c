#include "main.h"
#include <stdio.h>

/**
* rev_string - Write a function that reverses a string
* @s: parametro input string
* Return: String in reverse
*/

void rev_string(char *s)
{
	char rev = s[0];
	int cont = 0;
	int j;

	while (s[cont] != '\0')
	cont++;
	for (j = 0; j < cont; j++)
	{
		cont--;
		rev = s[j];
		s[j] = s[cont];
		s[cont] = rev;
	}
}
