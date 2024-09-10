#include <stdio.h>

int main() {
int a;
int b;
int somme;

printf("enter the first numbre\n");
scanf("%d", &a);
printf("enter the seconde numbre\n");
scanf("%d", &b);

if(a == b)
{
    somme = a + b;
    somme = somme * 3;
    printf("la somme est :%d", somme);
}
else{
    somme = a + b ;
printf("la somme est :%d", somme);
    return 0;
}
}