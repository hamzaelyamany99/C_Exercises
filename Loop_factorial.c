#include <stdio.h>

int main() {
    int n;
    int res;
    
    printf("enter a numbre\n");
    scanf("%d", &n);
    
    res = 1;
    while(n >= 1)
    {
         res = res * n;
                  n--;

    }
    printf("%d", res);
    return 0;
}