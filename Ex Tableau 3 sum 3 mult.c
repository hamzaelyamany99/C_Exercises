#include <stdio.h>

int main() {
    
    int T[6] = {3,4,5,8,9,7};
    int i;
    int somme = 0;
    int mult = 1;
    
    for(i = 0 ; i < 3 ; i++)
    {
        somme = somme + T[i];
    }
    printf("somme :%d\n", somme);
    for(i=3 ; i<6; i++)
    {
        mult = mult * T[i];
    }
        printf("multip :%d", mult);

    return 0;
}