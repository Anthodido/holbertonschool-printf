#include "main.h"
/**
* p_func - Fonction qui affiche un pointeur en hexadécimal.
* @liste: Liste d'arguments variadiques contenant le pointeur à imprimer.
*
* Cette fonction récupère un pointeur void via va_arg,
* le convertit en unsigned long, puis affiche son adresse
* en hexadécimal (minuscules) précédée de "0x" avec _putchar.
*
* Return: Nombre de caractères imprimés.
*/
int p_func(va_list liste)
{
	void *ptr;
	unsigned long address;
	int count = 0, i = 0;
	char hex_digits[] = "0123456789abcdef";
	char buffer[20];

	ptr = va_arg(liste, void *);

	_putchar('0');
	_putchar('x');
	count += 2;

	address = (unsigned long)ptr;

	if (address == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}

	while (address > 0)
	{
		buffer[i++] = hex_digits[address % 16];
		address = address / 16;
	}

	i--;
	while (i >= 0)
		count += _putchar(buffer[i--]);

	return (count);
}
