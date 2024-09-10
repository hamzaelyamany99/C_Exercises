#include <stdio.h>

int main() {
    int a;
    int b;
    int plus;
    int minus;
    int mult;
    int div;
    
    printf("entrer a : \n");
    scanf("%d", &a);
    printf("entrer b : \n");
    scanf("%d", &b);
    plus = a + b;
    printf("somme is %d ;\n", plus);
    minus = a - b;
    printf("minus is %d ;\n", minus);
    mult = a * b;
    printf("mult is %d ;\n", mult);
    div = a / b;
    printf("div is %d ;\n", div);
    
    return 0;
}