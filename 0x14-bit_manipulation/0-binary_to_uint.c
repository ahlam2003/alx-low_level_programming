#include "main.h"
unsigned int binary_to_uint(const char *b)
{
		unsigned int number = 0;
			int i = 0;

				if (b == 0)
							return (0);
					for (i = 0 ; (b[i] == '0') || (b[i] == '1'); i++)
							{
										number  <<= 1;
												number += b[i] - '0';
													}
						return (number);
}
