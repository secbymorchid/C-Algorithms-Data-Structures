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
void inverser_T(int *T, int n){
    int i, temp ; 
    for(i=0 ; i<n / 2 ; i++){
        temp = *(T + i ) ; 
        *(T + i ) = *(T + n -1 - i ) ; 
        *(T + n -1 - i ) = temp ;
        
    }
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
     
    inverser_T(T,n);
     printf("le tableau inverser est ;");

    Afficher_T( T, n);
    
    free(T); 
    
    
    return 0;
}
