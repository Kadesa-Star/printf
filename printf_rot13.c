#include "main.h"
/**
 * *rot13 - encodes a string
 * @m: pointer to string
 * Return: encoded strig
 */
int rot13(char *m)
{
	int k = 0;
	int l = 0;
	char first_data_set[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; m[k] != '\0'; k++)
	{
		for (l = 0; l < 52; l++)
		{
			if (m[k] == first_data_set[l])
			{
				m[k] = datarot13[l];
				break;
			}
		}
	}
	return (1);
}
