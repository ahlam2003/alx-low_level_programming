#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long c = 0;
	unsigned long sum = 0;

	while (c <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (a % 2 == 0)
			sum += a;
	}
	printf("%lu\n", sum);
	return (0);
}
