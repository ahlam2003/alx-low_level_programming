#include "main.h"

/**
 * print_times_table - Entry point
 *
 * @n: a given int
 *
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{

	int h, v, p;

	if (n >= 0 && n <= 15)
	{
		for (h = 0; h <= n; h++)
		{
			_putchar('0');
			for (v = 1; v <= n; v++)
			{
				_putchar(',');
				_putchar(' ');
				p = h * v;

				if (p <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}
				else if (p <= 99)
				{
					_putchar(' ');
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
				else
				{
					_putchar(((p / 100) % 10) + '0');
					_putchar(((p / 10) % 10) + '0');
					_putchar((p % 10)  + '0');
				}
			}
			_putchar('\n');
		}
	}
}
