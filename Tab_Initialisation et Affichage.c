#include <stdio.h>

int main() {
    int a[] = {1,2,3,4,5};
    int i;
    
    i = 0;
    while(i < 5)
    {
        printf("%d \n", a[i]);
        i++;
    }
    return 0;
}