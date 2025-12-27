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
void Tri_T(int T[],int n){
    int temp, i, j ;
    for(i=0; i<n-1 ;i++ ){
        for(j=0; j < n-i-1 ;j++){
            if(T[j]>T[j+1]){
                temp = T[j];
                T[j]=T[j+1];
                T[j+1]=temp;
            }
        }
    }
    
}
void fusionner(int T1[], int n1, int T2[], int n2, int T3[]){
    int i=0;
    int j=0;
    int k=0; 
    while( i<n1 && j<n2){   
        if (T1[i]<T2[j]){
            T3[k]=T1[i];
            i++;
        }else {
            T3[k]=T2[j];
            j++;
        }
        k++;
    }
    while(i < n1) { T3[k++] = T1[i++]; }
    while(j < n2) { T3[k++] = T2[j++]; }
}

int main(){
int T1[100], T2[100], T3[100],n1,n2; 
printf("Taille du Tableau 1 : ");
    scanf("%d", &n1);
    lire_T(T1, n1);

    printf("Taille du Tableau 2 : ");
    scanf("%d", &n2);
    lire_T(T2, n2);
    
    Tri_T(T1, n1);
    Tri_T(T2, n2);

    fusionner(T1, n1, T2, n2, T3);

    printf("Tableau fusionne et trie : ");
    afficher_T(T3, n1 + n2);
    return 0;
}
