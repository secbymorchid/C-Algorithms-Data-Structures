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

void Multip_X_M(int M[100][100], int L, int C, float X) {
    int i, j;
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            M[i][j] = M[i][j] * X;
        }
    }
}

int main() {
    int M[100][100];
    int L, C;
    float X;

    printf("Nombre de lignes : ");
    scanf("%d", &L);
    printf("Nombre de colonnes : ");
    scanf("%d", &C);

    lire_M(M, L, C);
    
    printf("\nMatrice originale :\n");
    afficher_M(M, L, C);
    
    printf("\nEntrez le nombre reel X : ");
    scanf("%f", &X);

    Multip_X_M(M, L, C, X);
    
    printf("\nMatrice resultante apres multiplication :\n");
    afficher_M(M, L, C);
    
    return 0;
}
