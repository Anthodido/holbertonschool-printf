# 🖨️ Projet _printf

## 📌 Description
Ce projet a été réalisé dans le cadre de notre formation Holberton.
Ce projet a pour but de recréer une version simplifiée de la fonction `printf`.

## 🚀 Fonctionnalités implémentées
La fonction _printf prend en charge :
- `%c` : caractère
- `%s` : string
- `%%` : pourcentage
- `%d` : entier
- `%i` : entier
- `%b` : entier en base binaire
- `%u` : entier non signé
- `%o` : entier en base octale
- `%x` : entier en base hexadécimale minuscule
- `%X` : entier en base hexadécimale majuscule
- `%p` : affichage d’adresse mémoire

## 🔧 Fonctionnalités à venir (WIP)
Nous prévoyons d’ajouter les fonctionnalités suivantes :
- Gestion des flags : `+`, `-`, `#`, `0`, ` `
- Gestion d'un buffer local de 1024 char

## 🧠 Architecture du projet
- [main.h](./main.h) — contient les prototypes et les librairies
- [_putchar.c](./_putchar.c) — fonction pour écrire un caractère sur stdout
- [_printf.c](./_printf.c) — analyse la chaîne de format et appelle les fonctions correspondant aux specifiers (%c, %s, etc.)
- [c_func.c](./c_func.c) — affiche un caractère avec `%c`
- [s_func.c](./s_func.c) — affiche une chaîne de caractères avec `%s`
- [mod_func.c](./mod_func.c) — affiche un pourcentage avec `%%`
- [d_func.c](./d_func.c) - affiche un entier signé avec `%d` et `%i`
- [b_func.c](./b_func.c) - affiche un entier en binaire `%b`
- [u_func.c](./u_func.c) - affiche un entier non signé `%u`
- [o_func.c](./o_func.c) - affiche un entier en octal avec `%o`
- [x_func.c](./x_func.c) - affiche un entier en hexadécimal minuscule avec `%x`
- [X_func.c](./X_func.c) - affiche un entier en hexadécimal majuscule avec `%X`
- [p_func.c](./p_func.c) - affiche un pointeur en hexadécimal avec `%p`
- [man_3_printf](./man_3_printf) - manuel utilisateur pour la fonction `_printf`.

## 🔧 Compilation
Compilez avec :
`gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o printf_test`

Puis exécutez :
`./printf_test`

## ✔️ Exemple d'utilisation
Le fichier [main.c](./main.c) inclus permet de tester tous les spécificateurs implémentés.

Il compare systématiquement le comportement de _printf avec celui du vrai printf.

Voici quelques tests effectués dans main.c :
- Test de phrases simples
- Test d'entiers signés (%d, %i) avec des valeurs négatives
- Test d'entiers non signés (%u) avec INT_MAX + 1024
- Test de conversion octale (%o)
- Test de conversion hexadécimale (%x et %X)
- Test de caractères (%c)
- Test de chaînes de caractères (%s)
- Test d'adresses mémoire (%p)
- Test du symbole pourcentage (%%)
- Test de spécificateur invalide (%r)

### Sortie attendue :
La sortie de _printf doit correspondre exactement à celle du vrai printf pour tous les spécificateurs supportés.

Pour les spécificateurs non gérés (comme %r), le comportement peut différer.

## 🧪 Tests
### Tests manuels
Le fichier [main.c](./main.c) fourni permet de vérifier automatiquement la conformité de _printf.

Compilez et exécutez le programme pour comparer les sorties.

### Cas limites testés :
- Chaînes NULL : affiche (null)
- Nombres négatifs : affichage correct avec le signe -
- Zéro : affiche 0
- Pointeur NULL : affiche 0x0
- Format NULL : retourne -1
- Valeurs extrêmes : INT_MAX + 1024 pour tester les débordements

### Vérification du style :
Pour vérifier que votre code respecte le style Betty :

`betty *.c *.h`

## 📖 Man page
Pour consulter la page de [manuel utilisateur](./man_3_printf) de _printf :

`man ./man_3_printf`

## 🔄 Valeur de retour

Succès : nombre de caractères affichés (hors caractère nul de fin)

Erreur : -1 si le paramètre format est NULL

Exemple avec main.c :

La fonction retourne la longueur exacte de la chaîne affichée, ce qui permet de vérifier la cohérence avec printf.

## ⚠️ Limitations connues

Cette implémentation ne gère pas encore :

- Les flags (+, -, #, 0, espace)
- La largeur de champ (%10d)
- La précision (%.5d, %.3s)
- Les modificateurs de longueur (l, h, ll)
- Les nombres à virgule flottante (%f, %e, %g)
- Certains spécificateurs non standards (comme %r testé dans main.c)

Ces fonctionnalités seront ajoutées dans les prochaines versions.

## 🧭 Flowchart

<img width="3415" height="1305" alt="Untitled diagram-2025-11-26-142708" src="https://github.com/user-attachments/assets/4d5d8c11-578e-416d-b624-5a8fc85eba01" />

## 🤝 Auteurs
Ce projet a été réalisé en collaboration par [Anthony](https://github.com/Anthodido), [Lucas](https://github.com/lucasscianna) & [Antoine](https://github.com/add1ktion).
