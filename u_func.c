#include "main.h"
/**
* u_func - Fonction qui affiche un entier non signé 
* @liste: Liste d'arguments variadiques contenant l'entier à imprimer.
*
* Cette fonction récupère un int non signé via va_arg
* décompose l'entier en chiffres, puis affiche chaque chiffre
* avec _putchar.
*
* Return: Nombre de caractères imprimés.
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
		digit = n % 10;
		buffer[ind] = '0' + digit;
		ind++;
		n = n / 10;
	}

	while (ind > 0)
	{
		ind--;
		_putchar (buffer[ind]);
		count++;
	}

	return (count);
}