#include "main.h"

/**
 * b_func - Gère le spécificateur personnalisé %b pour _printf
 * @liste: liste d’arguments dont on récupère un unsigned int
 *
 * Description: Convertit l’entier non signé en binaire, stocke les bits
 * dans un tampon puis les affiche dans le bon ordre avec _putchar.
 * Incrémente un compteur pour chaque caractère affiché.
 *
 * Return: Nombre total de caractères affichés
 */
 
int b_func(va_list liste)
{
unsigned int digit;
unsigned int num;
int ind = 0, count = 0;
char buffer[64];


num = va_arg(liste, unsigned int);
if (num == 0)
{
    _putchar ('0');
    return (1);
}
while (num > 0)
{
    digit = num % 2;
    buffer[ind] = '0' + digit;
    ind++;
    num >>= 1;
}
while (ind > 0)
{
	ind--;
	_putchar (buffer[ind]);
	count++;
}
return (count);
}