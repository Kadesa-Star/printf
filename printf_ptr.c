#include "main.h"
/**
 * handle_pointer - Helper function to handle pointer format specifier
 * @count: Pointer to character count
 * @args: Variable arguments list
 * @buffer: Local buffer for output
 */
void handle_pointer(int *count, va_list args, char *buffer)
{
void *ptr = va_arg(args, void *);
uintptr_t uintptr_ptr = (uintptr_t)ptr;
*count += sprintf(buffer + *count, "%#lx", uintptr_ptr);
if (*count >= BUFFER_SIZE)
{
write(1, buffer, *count);
*count = 0;
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
case 'p':
handle_pointer(&count, args, buffer);
break;
}
}
else
{
buffer[count++] = *format;
if (count >= BUFFER_SIZE)
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
