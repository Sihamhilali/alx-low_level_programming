#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, acc, sum = 0;
	char *last;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		acc = strtol(argv[i], &last, 10);
		if (*last)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += acc;
		}
	}
	printf("%d\n", sum);

	return (0);
}
