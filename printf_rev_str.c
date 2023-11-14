#include "main.h"
/**
 * printf_rev_str - prints a string in revverse
 * @va: pointer to string
 * Return: reversed string
 */
int printf_rev_str(va_list va)
{
	char *s = va_arg(va, char *);
	int length, z, half;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
		;
	z = 0;
	half = length / 2;

	while (half--)
	{
		temp = s[length - z - 1];
		s[length - z - 1] = s[z];
		s[z] = temp;
		z++;
	}
}
