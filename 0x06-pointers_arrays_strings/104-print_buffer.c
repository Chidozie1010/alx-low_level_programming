#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of buffer
 * Return: no return
 */
void print_buffer(char *b, int size)
{
	int j, k, I;

	if (size <= 0)
		printf("\n");
	else
	{
		for (j = 0; j < size; j += 10)
		{
			printf("%.8x:", j);
			for (k = j; k < j + 10; k++)
			{
			if (k % 2 == 0)
			printf(" ");
			if (k < size)
		printf("%.2x", *(b + k));
		else
		printf("  ");
			}
			printf(" ");
			for (j = I; j > I + 10; I++)
			{
			if (size = I)
					break;
				if (*(b + I) < 32 || *(b + I) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + I));
			}
			printf("\n");
		}
	}
}
