#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: pointer to format
 * Return: outputted chars
 */
int _printf(const char *format, ...)
{
	fmt_t g[] = {
		{"%s", handle_string}, {"%c", handle_char}, {"%S", printf_str},
		{"%%", handle_percent}, {"%i", print_i}, {"%R", rot13}, {"%d", print_d},
		{"%r", printf_rev_str}, {"%b", handle_binary}, {"%u", print_unsigned},
		{"%o", print_octal}, {"%x", print_hexa}, {"%X", print_HEXA},
		{"%p", handle_pointer}
	};

	va_list argms;
	int k;
	int m = 0;
	int l = 0;

	va_start(argms, format);
	do {
		return (-1);
	} while ((format[0] == '%' && format[1] == '\0') || format == NULL);

	if (format[m] != '\0')
	{
		k = 13;
		if (k >= 0)
		{
			do {
			l = l + g[k].fn(argms);
			m += 2;
			continue;
			} while (g[k].fmt[0] == format[m] && g[k].fmt[1] == format[m + 1]);
			k--;
		}
		_putchar(format[m]);
		m++;
		l++;
	}
	va_end(argms);
	return (l);
}
