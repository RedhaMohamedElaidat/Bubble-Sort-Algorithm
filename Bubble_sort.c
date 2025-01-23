#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void BubbleSort(int *T, int n) {
    int change = 0; // Initialisée à 0 (faux) pour entrer dans la boucle

    while (change == 0) { // Tant qu'un échange a été effectué
        change = 1; // Réinitialisée à 1 au début de chaque passe
        for (int i = 0; i < n - 1; i++) {
            if (T[i] > T[i + 1]) {
                // Échange des éléments si ils sont dans le mauvais ordre
                int k = T[i];
                T[i] = T[i + 1];
                T[i + 1] = k;
                change = 0; // Indique qu'un changement a eu lieu
            }
        }
    }
}
/*Optimize :*/
/*void BubbleSort(int *T, int n) {
    int Change = 0, i, p, m = n - 1;

    while (Change == 0) { // Tant qu'un échange a été effectué
        Change = 1; // Réinitialiser le drapeau
        for (i = 0; i < m; i++) {
            if (T[i] > T[i + 1]) {
                // Échanger les éléments si ils sont dans le mauvais ordre
                p = T[i];
                T[i] = T[i + 1];
                T[i + 1] = p;
                Change = 0; // Indiquer qu'un changement a eu lieu
            }
        }
        m = m - 1; // Réduire la plage de comparaison à chaque itération
    }
}*/
int main() {
    int n, i;
    float t1, t2;

    printf("\n\t\t\t BUBBLE SORT ALGORITHM \t\t\t\n");
    printf("-------------------------------------------------\n");
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    // Allocation de mémoire pour le tableau
    int *T = (int*)malloc(n * sizeof(int));
    if (T == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    printf("\nArray before sorting:\n");
    for (i = 0; i < n; i++) {
        T[i] = rand() % 100; // Nombres aléatoires entre 0 et 99
        if (i < 10 || i >= n - 10) { // Affiche seulement les 10 premiers et les 10 derniers éléments
            printf("%d ", T[i]);
        }
        if (i == 10) printf("... "); // Indique les éléments sautés
    }

// Mesure du temps d'exécution et affichage du tableau trié

t1 = clock();
BubbleSort(T, n);
t2 = clock();

printf("\nArray after sorting:\n");
for (int i = 0; i < n; i++) {
    if (i < 10 || i >= n - 10) { // Affiche seulement les 10 premiers et les 10 derniers éléments
        printf("%d ", T[i]);
    }
    if (i == 10) printf("... "); // Indique les éléments sautés
}

float t = (double)(t2 - t1) / CLOCKS_PER_SEC;
printf("\n\nExecution time: %f seconds\n", t);

// Libération de la mémoire allouée
free(T);
    return 0;
}
