#include <stdio.h>

int main() {
char a;

printf("enter un character\n");
scanf("%c", &a);

if(a >= 'A' && a <= 'Z')
{
    printf("le character est majuscule");
}
else{
printf("le character est miniscule");
    return 0;
}
}