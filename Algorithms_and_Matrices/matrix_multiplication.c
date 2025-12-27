#include<stdio.h>
 void lire_M(int M[100][100], int L,int C){
     int i, j ; 
     for (i=0 ; i<L ; i++){
         for (j=0 ; j<C ; j++){
             printf("M[%d][%d] =", i, j);
             scanf("%d", &M[i][j]); 
         }
     }
 }
 void afficher_M(int M[100][100], int L , int C ){
     int i ,j;
     printf("la matrice est : ");
     for (i=0; i< L ; i++){
         for (j=0; j<C ; j++){
             printf("%d", M[i][j]);
         }
         printf("\n");
     }
 }
 void prod_M(int A[100][100], int B[100][100], int C[100][100], int P, int N, int M){
     int i, j , k; 
     for (i = 0; i < P; i++) {
        for (j = 0; j < M; j++) {
            C[i][j] = 0; 
            for (k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
 }
 int main(){
int A[100][100], B[100][100], C[100][100];
    int P, N, M; 
    
    printf("Matrice A: nb de lignes (P) et nb de colonnes (N) : ");
    scanf("%d %d", &P, &N);
    printf("Matrice B: nb de lignes (N=%d) et nb de colonnes (M) : ", N);
    scanf("%d", &M);
    
    printf("\nSaisie de la matrice A :\n");
    lire_M(A, P, N);
    
    printf("\nSaisie de la matrice B :\n");
    lire_M(B, N, M);
    
    prod_M(A, B, C, P, N, M);
    
    printf("\nResultat du produit A x B :\n");
    afficher_M(C, P, M);
     
     
     return 0 ;
 }
