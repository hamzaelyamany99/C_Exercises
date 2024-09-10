#include <stdio.h>

int main ()
{
    int kph;
    int mps;
    printf("enter kph");
    scanf("%d", &kph)
    mps = kph * 0.27778;
    printf("votre vitesse est %d:", mps);
    return(0);
}