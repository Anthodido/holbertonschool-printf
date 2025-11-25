# 🖨️ Projet _printf

## 📌 Description
Ce projet a été réalisé dans le cadre de notre formation Holberton.
Ce projet a pour but de recréer une version simplifiée de la fonction `printf`.

## 🚀 Fonctionnalités implémentées
La fonction _printf prend en charge :
- `%c` : caractère
- `%s` : string
- `%%` : pourcentage

## 🔧 Fonctionnalitées à venir (WIP)
Nous prévoyons d’ajouter les fonctionnalités suivantes :
- `%d` — entier signé
- `%i` — entier signé
- `%u` — entier non signé
- `%o` — entier en base octale
- `%x` / `%X` — entier en base hexadécimale
- `%p` — affichage d’adresse mémoire
- Gestion des flags : `+`, `-`, `#`, `0`, ` `

## 🧠 Architecture du projet
- `_printf.c` — analyse la chaîne de format et appelle les fonctions correspondant aux specifiers (%c, %s, etc.)  
- `c_func.c` — affiche un caractère avec `%c`  
- `s_func.c` — affiche une chaîne de caractères avec `%s`  
- `mod_func.c` — affiche un pourcentage avec `%%`  
- `_putchar.c` — fonction pour écrire un caractère sur stdout  
- `main.h` — contient les prototypes et les librairies

## 🔧 Compilation
```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c
```

## ✔️ Exemple d'utilisation
WIP

## 🧪 Tests
WIP

## 🤝 Auteurs
Ce projet a été réalisé en binôme par [Anthony](https://github.com/Anthodido) et [Antoine](https://github.com/add1ktion).
