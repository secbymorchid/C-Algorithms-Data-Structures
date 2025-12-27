#include <stdio.h>
#include <stdlib.h>
void Lire_T(int *T, int n ){
    int i;
    for(i=0;i<n;i++){
    printf("T[%d] :", i+1);
    scanf("%d", (T+i));
    }
}
void Afficher_T(int *T, int n){
    int i; 
    for(i=0; i<n ; i++){
        printf("%d", *(T+i));
    }
    printf("\n");
}
void effacer_T(int *T , int *n , int X){
    int i ;
    int j = 0 ;
    for (i=0 ; i<*n ; i++){
        if(*(T + i) != X){
            *(T + j)= *(T + i);
            j++;
            
        }
    }
    *n = j ;
    
    
}
int main() {
    int n , X ; 
    printf("entrez la taille du tableau : \n");
    scanf("%d", &n);
    int *T =  calloc(n,sizeof(int));
    if (T == 0 ){
        printf("la memoire est deja alloué .\n");
        exit(0); 
    }
     Lire_T(T,n );
     
     printf("veuilleez la valeur que vous voulez effacer du tableau .\n");
     scanf("%d", &X);
     effacer_T(T, &n , X);
     printf("le tableau apres la modification est : ");
     Afficher_T(T,n);
    free(T); 
    
    
    
    
    
    
    
    
    return 0;
}
