#include "main.h"
/**
 * _printf - Réimplémentation simplifiée de printf
 * @format: chaîne de format à analyser et à afficher
 *
 * Description: Parcourt la chaine format et affiche soit le résultat
 * des fonctions lié à (%c, %s, %%), grâce à une table de pointeurs
 * de fonction soit les caractères tels quels
 *
 * Retourne : le nombre de caractères affichés
 */
int _printf(const char *format, ...)
{
	int i, count = 0;

format_func_t table[] = {
    {'c', c_func},
    {'s', s_func},
    {'%', mod_func},
	{'d', d_func},
	{'i', d_func},
	{'b', b_func},
	{'u', u_func},
    {'\0', NULL}
};
	va_list liste;

	if (format == NULL)
		return (0);

	va_start(liste, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
			}
			else if (format[i + 1] == 'c')
			{
				count += c_func(liste);
				i++;
			}
			else if (format[i + 1] == 's')
			{
				count += s_func(liste);
				i++;
			}
		}
	}
	va_end(liste);
	return (count);
}
