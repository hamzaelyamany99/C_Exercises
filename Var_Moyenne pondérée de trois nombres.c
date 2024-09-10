#include <stdio.h>

int main() {
    float a;
    float b;
    float c;
    float M;
    
    printf("entrer 1er nombre : \n");
    scanf("%f", &a);
    printf("entrer 2eme nombre : \n");
    scanf("%f", &b);
    printf("entrer 3eme nombre : \n");
    scanf("%f", &c);
    M = (a * 2 + b * 3 + c * 10 ) / 10;
    printf("moyenne ponderee est : %f ;\n", M);
    return 0;
}