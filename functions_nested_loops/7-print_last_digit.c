#include "main.h"
/**
 * _abs - check the code for Holberton School students.
 * 
 *
 * Return: return
 */
int print_last_digit(int n)
{

	int ul = n % 10;

	if (ul < 0)
	ul = -ul;	
	_putchar(ul + '0');
	return (-ul);
	
}
