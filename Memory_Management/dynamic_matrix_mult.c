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
void prod_M(int **A, int **B, int **C, int P, int N, int M) {
    int i, j, k;
    for (i = 0; i < P; i++) {
    for (j = 0; j < M; j++) {
    C[i][j] = 0;
    for (k = 0; k < N; k++) {
               C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
  
int main() {
  int P,N,M;
  int i;
  
  printf("entrez le nombre de ligne de A :");
  scanf("%d",&P);
  printf("entrez le nombre de colonne de A et qui sera le nombre de ligne de B : ");
  scanf("%d",&N);
  printf("entrez le nombre de colonne de B : ");
  scanf("%d",&M);
  
int **A= calloc(P, sizeof(int*));
int **B= calloc(N, sizeof(int*));
int **C= calloc(P, sizeof(int*)); 
    
 if (A == NULL || B == NULL || C == NULL) {
        printf("Erreur d'allocation memoire.\n");
        exit(1);
    }  
   for(i=0; i<P; i++) A[i] = calloc(N, sizeof(int));
   for(i=0; i<N; i++) B[i] = calloc(M, sizeof(int));
   for(i=0; i<P; i++) C[i] = calloc(M, sizeof(int));
    
    
    printf("Remplissez la matrice A :");
    lire_M(A, P, N);
    
    printf("Remplissez la matrice A :");
    lire_M(B, N, M);
    
    prod_M(A,B,C,P,N,M);
    
    printf("le produit de la matrice A et B est :");
    afficher_M(C, P, M);
 
 for(i=0; i<P; i++) free(A[i]);
    free(A);
for(i=0; i<N; i++) free(B[i]);    
    free(B);
    for(i=0; i<P; i++) free(C[i]);
    free(C);

    return 0;
}
