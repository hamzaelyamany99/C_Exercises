#include <stdio.h>

void    somme()
{
    int n1;
    int n2;
    int somme;
    
    printf("enter the first numbre:\n");
    scanf("%d", &n1);
    printf("enter the seconde numbre:\n");
    scanf("%d", &n2);
    
    somme = n1 + n2;
    printf("the sum is : %d", somme);
}

int main() {
   somme();
    return 0;
}