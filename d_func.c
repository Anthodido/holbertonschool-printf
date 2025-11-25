#include "main.h"
/**
* d_func - Fonction qui affiche un entier signé (%d et %i).
* @liste: Liste d'arguments variadiques contenant l'entier à imprimer.
*
* Cette fonction récupère un int via va_arg, gère les valeurs
* négatives, puis convertit chaque chiffre pour l'afficher avec _putchar.
* Les chiffres sont stockés temporairement dans un buffer
* afin d'être réaffichés dans le bon ordre.
*
* Return: Nombre de caractères imprimés.
*/
int d_func(va_list liste)
{
	int n, count = 0;
	unsigned int num;
	char buffer[11];
	int ind = 0;
	unsigned int digit;

	n = va_arg(liste, int);
	if (n == 0)
	{
		_putchar ('0');
		return (1);
	}

	if (n < 0)
	{
		_putchar ('-');
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	while (num > 0)
	{
		digit = num % 10;
		buffer[ind] = '0' + digit;
		ind++;
		num = num / 10;
	}

	while (ind > 0)
	{
		ind--;
		_putchar (buffer[ind]);
		count++;
	}

	return (count);
}
