#include "main.h"
/**
 * handle_binary - Helper function to handle binary format specifier
 * @count: Pointer to character count
 * @args: Variable arguments list
 * Return: NULL
 */
void handle_binary(int *count, va_list args);
void handle_binary(int *count, va_list args)
{
unsigned int num = va_arg(args, unsigned int);
unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);
while (mask > 0)
{
putchar((num & mask) ? '1' : '0');
mask >>= 1;
(*count)++;
}
}
/**
 * _printf -function that produces output according to a format
 * @format: Pointer
 * Return: NULL
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
case 'd':
case 'i':
handle_int(&count, args);
break;
case 'b':
handle_binary(&count, args);
break;
case '%':
handle_percent(&count);
break;
default:
handle_percent(&count);
putchar(*format);
count += 2;
break;
}
}
else
{
putchar(*format);
count++;
}
format++;
}
va_end(args);
return (count);
}
