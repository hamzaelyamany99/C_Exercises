#include <stdio.h>
int main() {
    int n;
    int i;
    int somme;
    
    printf("enter nombre d'elements:\n");
    scanf("%d", &n);
    
    int tableau[n], j = 0;
    
    somme = 0;
    for(i = 0;i < n; i++){
        printf("entrez l'element %d \n:", i+1);
        scanf("%d", &j);
        somme = somme + j;
    }
         printf("la somme est : %d \n", somme);
    return 0;
}