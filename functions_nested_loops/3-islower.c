#include "main.h"

/**
* _islower - Shows 1 if the input is a lowercase character. Another case 0
* @c: The caracter in ASCII code.
* Description: The character to be checked.
* Return: 1 or 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
