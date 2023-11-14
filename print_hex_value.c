#include "main.h"
/**
 * print_hex_value - prints a value in hex
 * @number:  the value to print
 * Return: hex value
 */
int print_hex_value(unsigned int number)
{
int j, cont = 0;
int *arr;

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
