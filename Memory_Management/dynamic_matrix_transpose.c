#include <stdio.h>
#include <stdlib.h>
 void lire_M(int **M, int L,int C){
     int i, j ; 
     for (i=0 ; i<L ; i++){
         for (j=0 ; j<C ; j++){
             printf("M[%d][%d] =", i, j);
             scanf("%d", &M[i][j]); 
         }
     }
 }
 void afficher_M(int **M, int L , int C ){
     int i ,j;
     printf("la matrice est : ");
     for (i=0; i< L ; i++){
         for (j=0; j<C ; j++){
             printf("%d", M[i][j]);
         }
         printf("\n");
     }
 }
void transpose_M(int **M, int N) {
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
int L, C;
int i;
printf("entrez le nombre de lignes:");
scanf("%d",&L);

printf("entrez le nombres de colonnes :");
scanf("%d",&C);

int **M = calloc(L, sizeof(int*));
if(M==0){
     printf("Erreur d'allocation memoire.\n");
        return 1;
}

for(i=0; i<L; i++) {
       *(M + i)= calloc(C, sizeof(int));
        if (*(M + i) == NULL) return 1;
}     
 printf("Remplissez la matrice M:");
    lire_M(M, L, C);

if (L == C) {
        transpose_M(M, L);
        printf("\nMatrice apres transposition :\n");
        afficher_M(M, L, C);
    } else {
        printf("\nLa transposition nécessite une matrice carree.\n");
    }

for(i=0; i<L; i++) free(*(M + i));
free(M);


    return 0;
}
