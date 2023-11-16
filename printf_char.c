#include "main.h"
/**
 * handle_char - Helper function to handle char format specifier * @count: pointer
 * @args: argument count
 * Return: outputted chars
 */
int handle_char(int *count, va_list args)
{
	_putchar(va_arg(args, int));
	(*count)++;
	return (1);
}
