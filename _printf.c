#include "main.h"
/**
 * handle_char: Helper function to handle char format specifier
 * @count: pointer
 * @args: argument count
 * Return: outputted chars
 */
void handle_char(int *count, va_list args)
{
_putchar(va_arg(args, int));
(*count)++;
}
/**
 * handle_string: Helper function to handle string format specifier
 * @count: pointer
 * @args: argument count
 * Return: outputted chars
 */
void handle_string(int *count, va_list args)
{
char *str = va_arg(args, char *);
while (*str != '\0')
{
_putchar(*str);
(*count)++;
str++;
}
}
/**
 * handle_percent: Helper function to handle percent sign format specifier
 * @count: pointer
 * Return: outputted percent
 */
void handle_percent(int *count)
{
_putchar('%');
(*count)++;
}
/**
 * _printf: function that produces output according to a format
 * @format: pointer to format 
 * Return: outputted chars
 */
int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);
int count = 0;
while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
handle_char(&count, args);
break;
case 's':
handle_string(&count, args);
break;
case '%':
handle_percent(&count);
break;
default:
handle_percent(&count);
_putchar(*format);
count += 2;
break;
}
}
else
{
_putchar(*format);
count++;
}
format++;
}
va_end(args);
return (count);
}
