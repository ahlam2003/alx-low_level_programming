#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *from, *to;
	char ch;

	if (argc != 3)
	{
	fprintf(stderr, "Usage: cp file_from file_to\n");
	exit(1);
	}

	from = fopen(argv[1], "r");
	if (from == NULL)
	{
	fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
	exit(1);
	}

	to = fopen(argv[2], "w");
	if (to == NULL)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
	fclose(from);
		exit(1);
	}

	while ((ch = fgetc(from)) != EOF)
	{
	fputc(ch, to);
	}
	fclose(from);
	fclose(to);
	return (0);
}
