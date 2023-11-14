#include "main.h"
/**
 * handle_binary - Helper function to handle binary format specifier
 * @count: Pointer to character count
 * @args: Variable arguments list
 * @buffer: Local buffer for output
 */
void handle_binary(int *count, va_list args, char *buffer)
{
unsigned int num = va_arg(args, unsigned int);
unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);
while (mask > 0)
{
buffer[(*count)++] = (num & mask) ? '1' : '0';
mask >>= 1;
if (*count == BUFFER_SIZE)
{
write(1, buffer, *count);
*count = 0;
}
}
}
/**
 * _printf - function that produces output according to a format
 * @format: Pointer to character
 * Return: 0(success)
 */
int _printf(const char *format, ...)
{
va_list args;
va_start(args, format);
int count = 0;
char buffer[BUFFER_SIZE];
while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'b':
handle_binary(&count, args, buffer);
break;
}
}
else
{
buffer[count++] = *format;
if (count == BUFFER_SIZE)
{
write(1, buffer, count);
count = 0;
}
}
format++;
}
if (count > 0)
{
write(1, buffer, count);
}
va_end(args);
return (count);
}
