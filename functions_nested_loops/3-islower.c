#include "main.h"

/**
* _islower - checks for lowercase character
* parametro: parameter using the function _islower
* Return 1 or 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
