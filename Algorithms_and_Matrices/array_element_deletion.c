#include<stdio.h>

void lire_T(int T[], int n ){
    int i;
for(i=0 ; i<n ; i++){
    printf("T[%d]", i);
    scanf("%d",&T[i]); 
}    
}
void afficher_T(int T[], int n){
    for (int i=0; i<n ;i++){
        printf("%d", T[i]);
    }
    printf("\n");
}
void effacer_T(int T[], int *n, int X){
    int j=0;
    for (int i=0 ; i<*n ; i++){
        if (T[i]!= X){
            T[j]=T[i];
            j++;
        
        }
    }
    *n=j;
}
int main(){
    int T[100], n, X;
    printf("Entrez la taille initiale : ");
    scanf("%d", &n);
    lire_T(T, n);
    printf("Valeur a supprimer : ");
    scanf("%d", &X);
    effacer_T(T, &n, X);
    printf("Nouvelle taille : %d\n", n);
    afficher_T(T, n);
    
    return 0 ; 
}
