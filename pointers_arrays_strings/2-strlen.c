#include "main.h"

/**
* _strlen - returns the length of a string
* @s: string
* Description: funcions para sacar la longitud de un caracter
* Return: length.
*/

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')

	{
		longi++;
		s++;
	}
	return (longi);
}
