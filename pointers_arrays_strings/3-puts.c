#include "main.h"

/**
* _puts - prints a string
* @str: comando _puts
* function: using to print
* Return:
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str++);
	}
		_putchar ('\n');
}
