#include "main.h"
#include <stdlib.h>
/**
 * print_octal - converts nummber to octal
 * @va: value to be converted
 * Return: nothing
 */
int print_octal(va_list va)
{
	int j, cont = 0;
	int *arr;
	unsigned int number = va_arg(va, unsigned int);

	do {
	number = number / 8;
	cont++;
	} while (number / 8 != 0);
	cont++;

	arr = malloc(sizeof(int) * cont);
	for (j = 0; j < cont; j++)
	{
		arr[j] = number % 8;
		number = number / 8;
	}
	for (j = cont - 1; j >= 0; j--)
	{
	_putchar(arr[j] + '0');
	}
	free(arr);
	return (cont);
}
/**
 * print_hexa - prints hexadecimal lowercase
 * @va: value to convert to hex lower case
 * Return: the hexadecimal valu
 */
int print_hexa(va_list va)
{
	int j, cont = 0;
	int *arr;
	unsigned int number = va_arg(va, unsigned int);

	do {
	number = number / 16;
	cont++;
	} while (number / 16 != 0);
	cont++;
	arr = malloc(sizeof(int) * cont);

	for (j = 0; j < cont; j++)
	{
		arr[j] = number % 16;
		number = number / 16;
	}
	for (j = cont - 1; j >= 0; j--)
	{
		while (arr[j] > 9)
		{
			arr[j] += 7;
		}
	_putchar(arr[j] + '0');
	}
	free(arr);
	return (cont);
}
/**
 * print_HEXA - prints hexadec uppercase
 * @va: value to convert to hex upper case
 * Return: the hexadecimal value
 */
int print_HEXA(va_list va)
{
	int j, cont = 0;
	int *arr;
	unsigned int number = va_arg(va, unsigned int);

	do {
	number = number / 16;
	cont++;
	} while (number / 16 != 0);
	cont++;
	arr = malloc(sizeof(int) * cont);

	for (j = 0; j < cont; j++)
	{
		arr[j] = number % 16;
		number = number / 16;
	}
	for (j = cont - 1; j >= 0; j--)
	{
		while (arr[j] > 9)
		{
			arr[j] += 7;
		}
	_putchar(arr[j] + '0');
	}
	free(arr);
	return (cont);
}
