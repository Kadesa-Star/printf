#include "main.h"
#include <stdarg.h>
/**
 * print_unsigned - prints an integer number
 * @args: integer
 * Return: integer number
 */
int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int m1, number;
	int l_s = n % 10;
	int tem = 1;
	int dig;

	m1 = 1;
	n /= 10;
	number = n;

	do {
		_putchar('-');
		number = -number;
		n = -n;
		l_s = -l_s;
		m1++;
	} while (l_s < 0);

	if (number > 0)
	{
		while (number / 10 != 0)
		{
			tem *= 10;
			number /= 10;
		}
		number = n;
		do {
			dig = number / tem;
			_putchar(dig * tem);
			tem /= 10;
			m1++;
		} while (tem > 0);
	}
	_putchar(l_s + '0');
	return (m1);
}
