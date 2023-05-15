#include "holberton.h"
void print_binary(unsigned long int n)
{
	int c, j;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (c = 63; c >= 0; c--)
	{
		j = n >> c;
		if (j & 1)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1)
			_putchar('0');
	}
}
