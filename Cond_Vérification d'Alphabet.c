#include <stdio.h>

int main() {
char a;

printf("enter un character\n");
scanf("%c", &a);

if((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
{
    if (a >= 'A' && a <= 'Z')
    {
    printf("le character est majuscule");
    }
    if (a >= 'a' && a <= 'z')
    {
    printf("le character est miniscule");
    }
}
else{
printf("c'est pas un character");
    return 0;
}
}