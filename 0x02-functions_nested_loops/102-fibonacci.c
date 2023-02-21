#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long c;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;

		if (i != 49)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
