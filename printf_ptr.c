#include "main.h"
/**
 * handle_pointer - Helper function to handle pointer format specifier
 * @count: Pointer to character count
 * @args: Variable arguments list
 * @buffer: Local buffer for output
 */
int handle_pointer(int *count, va_list args, char *buffer)
{
	int *ptr = va_arg(args, void *);
	intptr_t intptr_ptr = (intptr_t)ptr;
	*count += sprintf(buffer + *count, "%#lx", intptr_ptr);

	if (*count >= BUFF_SIZE)
	{
	write(1, buffer, *count);
	*count = 0;
	}
	return (1);
}
