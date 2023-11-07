#include "main.h"

/**
* print_sign - Imprimir el signo de un numero.
* @n: Print the sign of a number.
* Description: funcion usada para imprimir el signo de un numero
* Return: 1, 0 or -1.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
