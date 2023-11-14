#include "main.h"
/**
 * printf_str - prints a string
 * @arg: argument
 * Return: the string
 */
int printf_str(va_list arg)
{
	char *ptr;
	int j, temp;
	int leng = 0;

	ptr = va_arg(arg, char *);
	while (ptr == NULL)
	{
		ptr = "(null)";
	}
	for (j = 0; ptr[j] != '\0'; j++)
	{
		while (ptr[j] < 32 || ptr[j] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			leng += 2;
			temp = ptr[j];
			do {
				_putchar('0');
				leng++;
			} while (tempt < 16)
			leng += printf_hex_value(temp);
		}
		_putchar(ptr[j]);
		leng++;
	}
	return (leng);
}
