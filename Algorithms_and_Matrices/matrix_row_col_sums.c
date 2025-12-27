#include<stdio.h>
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
void Som_L_C_M(int M[100][100], int L, int C) {
    int i, j, som;

    // --- Somme de chaque ligne ---
    printf("\nSomme des lignes :\n");
    for (i = 0; i < L; i++) {
        som = 0;
        for (j = 0; j < C; j++) {
            som += M[i][j];
        }
        printf("Somme de la ligne %d = %d\n", i, som);
    }


    printf("\nSomme des colonnes :\n");
    for (j = 0; j < C; j++) {
        som = 0; 
        for (i = 0; i < L; i++) {
            som += M[i][j];
        }
        printf("Somme de la colonne %d = %d\n", j, som);
    }
}
int main(){
    int M[100][100];
    int L, C;
      printf("Nombre de lignes : ");
    scanf("%d", &L);
    printf("Nombre de colonnes : ");
    scanf("%d", &C);

    lire_M(M, L, C);
    
    printf("\nMatrice originale :\n");
    afficher_M(M, L, C);

    
Som_L_C_M(M,L,C);    
    
    
    
    
    
    
    
    
    return 0;
}

