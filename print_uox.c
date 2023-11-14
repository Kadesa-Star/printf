#include "main.h"
/**
 * print_unsigned - prints an unsigned integer number
 * @args: integer
 * Return: nothing
 */
int print_unsigned(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
unsigned int m1;
m1 = n;
if (n < 0)
{
_putchar('-');
m1 = -n;
}
if (n / 10 != 0)
{
print_unsigned int(m1 / 10);
}
_putchar((m1 % 10) + '0');
}
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
