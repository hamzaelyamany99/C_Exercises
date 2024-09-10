#include <stdio.h>

int main ()
{
    int c;
    printf("enter the Celsius degree");
    scanf("%d", &c);
    if (c < 0){
        printf("Solide");
        return(0);
    }
    if (0 <= c && c < 0){
        printf("Liquide");
        return(0);
    }
    if (c >= 100){
        printf("Gaz");
        return(0);
    }
    return(0);
}