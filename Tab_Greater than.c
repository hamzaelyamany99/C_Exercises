#include <stdio.h>

void    max()
{
    int n1;
    int n2;
    
    printf("enter the first numbre:\n");
    scanf("%d", &n1);
    printf("enter the seconde numbre:\n");
    scanf("%d", &n2);
    
    if(n1 > n2)
    {
        printf("%d is greater", n1);
    }
    else if(n1 == n2)
    {
        printf("the parametrs are equal");
    }
    else 
    {
        printf("%d is greater", n2);
    }
}

int main() {
   max();
    return 0;
}