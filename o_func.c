#include "main.h"
/**
*
*
*
*
*
*/
int u_func(va_list liste)
{
	unsigned int digit, n = 0;
	int count = 0, ind = 0;
	char buffer[11];

	n = va_arg(liste, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		digit = n % 8;
		buffer[ind] = '0' + digit;
		ind++;
		n = n / 8;
	}

	while (ind > 0)
	{
		ind--;
		_putchar (buffer[ind]);
		count++;
	}

	return (count);
}
