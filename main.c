#include <stdio.h>


int main() {
    int i;
    char input[100];
    char secret[] = "motdepasse"; 

    for (i = 0; i < 3; i++) {
        printf("Entrez le mot de passe : ");
        fgets(input, sizeof(input), stdin);
       
        input[strcspn(input, "\n")] = '\0';
       
        if (strcmp(input, secret) == 0) {
            printf("Mot de passe correct. Accès autorisé.\n");
            return 0; // Sortie du programme avec succès
        } else {
            printf("Mot de passe incorrect. Tentative %d sur 3.\n", i + 1);
        }
    }

    printf("Vous avez atteint le nombre maximal de tentatives. Allez barre toi avertissement !\n");

    return 1; 
}
