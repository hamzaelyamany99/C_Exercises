#include <stdio.h>

int main() {
    int nbr;
    int i;
    
    printf("enter a numbre\n");
    scanf("%d", &nbr);
    
    
    for(i = 1 ; i <= 10 ; i++)
    {
            printf("%d * %d = %d \n", nbr, i, nbr*i);
    }

    return 0;
}