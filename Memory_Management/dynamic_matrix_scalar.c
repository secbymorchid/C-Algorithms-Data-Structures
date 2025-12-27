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
void Multip_X_M(int **M, int L, int C, float X) {
    int i, j;
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            M[i][j] = M[i][j] * X;
        }
    }
}
  
int main() {
int L,C ;
float X ;
int i;

printf("entrez le nombre de ligne : ");
scanf("%d",&L);
printf("entrez le nombre de colonne : ");
scanf("%d",&C);
int **M= calloc(L,sizeof(int*));
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
    printf("entrez la valeur de X ");
    scanf("%f",&X);
    
    Multip_X_M(M,L,C,X);
    printf("la matrice final est : ");
afficher_M(M,L,C);

for(i=0; i<L; i++) free(*(M + i));
free(M);


    return 0;
}
