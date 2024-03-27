# CodeC
Code C 3 essai + avertissement 

- La ligne `#include <stdio.h>` inclut la bibliothèque standard d'entrée/sortie.
- La fonction `int main()` est le point d'entrée du programme.
- La variable `int i` est utilisée pour suivre le nombre de tentatives.
- Les tableaux `char input[100]` et `char secret[]` sont utilisés pour stocker le mot de passe entré et le mot de passe secret, respectivement.
- La boucle `for` s'exécute 3 fois, permettant à l'utilisateur d'essayer le mot de passe 3 fois avant de quitter le programme.
- À l'intérieur de la boucle, l'instruction `printf` invite l'utilisateur à entrer le mot de passe.
- La fonction `fgets` lit l'entrée de l'utilisateur dans le tableau `input`.
- La ligne `input[strcspn(input, "\n")] = '\0'` supprime le caractère de nouvelle ligne de la fin du tableau `input`.
- La fonction `strcmp` compare le tableau `input` et le tableau `secret`.
- Si le mot de passe est correct, la fonction `strcmp` renvoie 0, et le programme se termine avec un statut de succès.
- Si le mot de passe est incorrect, la fonction `strcmp` renvoie une valeur différente de zéro, et le programme affiche "Mot de passe incorrect. Tentative x sur 3."
- Si l'utilisateur entre le mauvais mot de passe 3 fois, le programme se termine avec un statut d'échec.