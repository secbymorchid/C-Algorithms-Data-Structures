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
        printf("%d ", T[i]);
    }
    printf("\n");
}
void inverser_T(int T[], int n){
    int i , temp;
    for (i=0 ; i<n/2 ; i++){
        temp = T[i]; 
        T[i]=T[n-1-i];
        T[n-1-i]=temp;
    }
}
int main(){
    int T[100],n ;
      printf("Entrez la taille du tableau  : ");
    scanf("%d", &n);
    lire_T(T,n);
    inverser_T(T,n);
    printf("le tableau inverse est :");
    afficher_T(T, n);
    
    
    return 0 ; 
}
