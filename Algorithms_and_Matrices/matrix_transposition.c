#include <stdio.h>

void lire_M(int M[100][100], int L, int C) {
    int i, j;
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
}

void afficher_M(int M[100][100], int L, int C) {
    int i, j;
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
}

void transpose_M(int M[100][100], int N) {
    int i, j, temp;
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            temp = M[i][j];
            M[i][j] = M[j][i];
            M[j][i] = temp;
        }
    }
}

int main() {
    int M[100][100];
    int L, C;

    printf("Nombre de lignes : ");
    scanf("%d", &L);
    printf("Nombre de colonnes : ");
    scanf("%d", &C);

    lire_M(M, L, C);
    
    printf("\nMatrice originale :\n");
    afficher_M(M, L, C);

    if (L == C) {
        transpose_M(M, L);
        printf("\nMatrice apres transposition :\n");
        afficher_M(M, L, C);
    } else {
        printf("\nLa transposition nécessite une matrice carree.\n");
    }

    return 0 ;
}
