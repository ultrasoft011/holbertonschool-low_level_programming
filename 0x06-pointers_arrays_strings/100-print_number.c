#include "holberton.h"
/**
 *print_number - prints an integer
 *@n: input number
 */
void print_number(int n)
{
	unsigned int remain = n;

	if (n < 0)
	{
		_putchar('-');
		remain = remain * -1;
	}

	if ((remain / 10) > 0)
		print_number(remain / 10);

	_putchar((remain % 10) + '0');
}
