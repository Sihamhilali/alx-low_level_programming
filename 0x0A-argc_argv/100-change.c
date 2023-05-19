#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum, incri;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = strtol(argv[1], &p, 10);
	incri = 0;

	if (!*p)
	{
		while (sum > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (sum >= cents[i])
				{
					incri += sum / cents[i];
					sum = sum % cents[i];
				}
			}
		}
		if (sum == 1)
			incri++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", incri);
	return (0);
}
