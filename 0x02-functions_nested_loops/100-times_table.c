#include "main.h"

/**
 * print_value - prints a value with appropriate formatting
 * @value: the value to be printed
 * @is_first: flag indicating if it is the first value in the row
 */
void print_value(int value, int is_first)
{
	if (is_first)
		_putchar(value + '0');
	else if (value < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(value + '0');
	}
	else if (value >= 10 && value < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar((value / 10) + '0');
		_putchar((value % 10) + '0');
	}
	else if (value >= 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar((value / 100) + '0');
		_putchar(((value / 10) % 10) + '0');
		_putchar((value % 10) + '0');
	}
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			print_value(k, j == 0);
		}
		_putchar('\n');
	}
}
