#include "main.h"
/**
 * _power - calculate (base and power)
 * @base: base of the exponet
 * @pow: power of the exponet
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int nbr;
	unsigned int i;

	nbr = 1;
	for (i = 1; i <= pow; i++)
		nbr *= base;
	return (nbr);
}
/**
 * print_binary - prints the binary representation of a nbrber
 * @n: nbr of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, last;
	char find;

	find = 0;
	div = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (div != 0)
	{
		last = n & div;
		if (last == div)
		{
			find = 1;
			_putchar('1');

		}
		else if (find == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
