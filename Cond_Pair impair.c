#include <stdio.h>

int main() {
int nombre;

printf("enter a numbre");
scanf("%d", &nombre);
if(nombre % 2 == 0)
{
    printf("the numbre is pair");
}
else{
printf("the numbre is impair");
}
    return 0;
}