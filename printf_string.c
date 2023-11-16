#include "main.h"
/**
 * handle_string - Helper function to handle string format specifier
 * @count: pointer
 * @args: argument count
 * Return: outputted chars
 */
int handle_string(int *count, va_list args)
{
	char *str = va_arg(args, char *);

	while (*str != '\0')
	{
	_putchar(*str);
	(*count)++;
	str++;
	}
	return (1);
}
