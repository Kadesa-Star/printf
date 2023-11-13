#include "main.h"
#include <stdarg.h>
/**
 * print_i - prints an integer number
 * @args: integer
 * Return: nothing
 */
void print_i(va_list args)
{
	int n = va_args(args, int);
	unsigned int m1;

	m1 = n;

	if (n < 0)
	{
		_putchar('-');
		m1 = -n;
	}
	if (n / 10 != 0)
	{
	print_number(m1 / 10);
	}
	_putchar((m1 % 10) + '0');
}
/**
 * print_d - prints an integer number
 * @args: integer
 * Return: nothing
 */
void print_d(va_list args)
{
	int n = va_args(args, int);
	unsigned int m1;

	m1 = n;

	if (n < 0)
	{
		_putchar('-');
		m1 = -n;
	}
	if (n / 10 != 0)
	{
		print_number(m1 / 10);
	}
	_putchar((m1 % 10) + '0');
}
