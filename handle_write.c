#include "main.h"
#define BUFFER_SIZE 1024
/**
 * handle_write - Helper function to handle binary format specifier
 * @count: Pointer to character count
 * @args: Variable arguments list
 * @buffer: Local buffer for output
 */
void handle_write(int *count, va_list args, char *buffer)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);

	while (mask > 0)
	{
		buffer[(*count)++] = (num & mask) ? '1' : '0';
		mask >>= 1;
		if (*count == BUFF_SIZE)
		{
			write(1, buffer, *count);
			*count = 0;
		}
	}
}
