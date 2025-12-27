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
void Tri_T(int *T, int n){
    int temp , i , j ; 
    for(i=0; i<n-1 ; i++){
        for(j=0 ; j<n-i-1 ; j++){
            if (*(T + j) > *(T + j + 1)){ 
                temp = *(T + j);
                *(T + j) = *(T + j + 1);
                *(T + j + 1) = temp;
            }
            
        }
    }
    
}
void fusioner(int *T1 , int n1 , int *T2 , int n2 ,int *T3){
    int i=0 ;
    int j=0 ; 
    int k=0 ; 
    while( i<n1 && j<n2){
        if( *(T1 + i) < *(T2 + j)){
            *(T3 + k) = *(T1 + i);
            i++;
        }else {
            *(T3 + k) = *(T2 + j);
            j++;
        }
        k++;
    }
    while (i < n1) { *(T3 + k++) = *(T1 + i++);}
    while (j < n2) { *(T3 + k++) = *(T2+ j++);}
}
int main() {
    int n1 , n2, n3 ; 
    printf("entrez la taille du tableau : \n");
    scanf("%d", &n1);
    int *T1 =  calloc(n1,sizeof(int));
    if (T1 == 0 ){
        printf("la memoire est deja alloué .\n");
        exit(0); 
    }
     Lire_T(T1,n1 );
     printf("entrez la taille du tableau 1 : \n");
    scanf("%d", &n2);
    int *T2 =  calloc(n2,sizeof(int));
    if (T2 == 0 ){
        printf("la memoire est deja alloué .\n");
        exit(0); 
    }
   Lire_T(T2,n2) ; 
   
   Tri_T(T1,n1);
   Tri_T(T2,n2);
   printf("\nTableau 1 trie : ");
    Afficher_T(T1, n1);
    printf("Tableau 2 trie : ");
    Afficher_T(T2, n2);
    
    n3 = n1 + n2 ;
    int *T3 =  calloc(n3, sizeof(int));
    if (T3 == 0 ){
        printf("la memoire est deja alloué .\n");
        exit(0); 
    }
    
   fusioner(T1, n1 , T2, n2, T3);
   
   printf("tableau fusionner est : .\n");
   Afficher_T(T3,n3);
    free(T1);
    free(T2);
    free(T3);
    
    
    
    
    
    
    
    
    
    return 0;
}
