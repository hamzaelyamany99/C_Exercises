#include <stdio.h>

void    facto()
{
    int f;
    
    printf("enter a positive number:\n");
    scanf("%d", &f);
    
    if(f >= 1)
    {
        int res = 1;
        while(f >= 1)
        {
            res = res * f;
            f--;
        }
        printf("the result is:%d", res);
    
}
}
int main() {
    facto();
    return 0;
}