#include <stdio.h>

// Fonction de l'algorithme d'Euclide étendu
int euclideEtendu(int a, int b, int *x, int *y) {
    // Cas de base : si b = 0
    if (b == 0) {
        *x = 1;
        *y = 0;
        return a; // Le PGCD de (a,0) est a
    }

    int x1, y1; // Variables temporaires pour stocker les coefficients récursifs
    int d = euclideEtendu(b, a % b, &x1, &y1);

    // Mise à jour des coefficients x et y
    *x = y1;
    *y = x1 - (a / b) * y1;

    return d; // On retourne le PGCD
}

int main() {
    int a = 99, b = 78;
    int x, y;
    int d = euclideEtendu(a, b, &x, &y);

    printf("PGCD(%d, %d) = %d\n", a, b, d);
    printf("%d = %d*(%d) + %d*(%d)\n", d, a, x, b, y);

    return 0;
}

