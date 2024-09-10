#include <stdio.h>

int main() {
int a;

printf("enter a numbre\n");
scanf("%d", &a);

if(a > 0)
{
    printf("the numbre is positive");
}
else if (a < 0){
    printf("the numbre is negative");
}
else{
printf("the numbre is 0");
    return 0;
}
}