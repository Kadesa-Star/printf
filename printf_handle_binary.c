#include "main.h"
/**
 * handle_binary - fucntion to convert unsigned int to bin
 * @args: Variable arguments list
 * Return: return characters printed
 */
int handle_binary(va_list args)
{
	int temp = 0;
	int counter = 0;
	int j, mask = 1;
	int c;
	unsigned int result;
	unsigned int store = va_arg(args, unsigned int);

	for (j = 0; j < 32; j++)
	{
		result = ((mask << (32 - j)) & store);
		do {
			temp = 1;
		} while (result >> (31 - j));

		while (temp)
		{
			c = result >> (31 - j);
			_putchar(c + '0');
			counter++;
		}
	}
	do {
		counter++;
		_putchar('0');
	} while (counter == 0);
	return (counter);
}
