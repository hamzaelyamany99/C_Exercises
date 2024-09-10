#include <stdio.h>

int main() {
    int i;
    int j;
    int n;
    int save;
    
    printf("enter the elements:");
    scanf("%d", &n);
    int T[n];
     
     for(i= 0; i<n ; i++){
    printf("enter the element:%d ", i+1);
    scanf("%d", &T[i]);
     }
    
    for(j = 0; j<n-1 ; j++)
    {
        for(i = 0; i<n-1; i++)
        {
            if(T[i] > T[i+1])
            {
                save = T[i];
                T[i] = T[i+1];
                T[i+1] = save;
            }
        }

    }
    for(j = 0; j<n ; j++){
    printf("%d, ", T[j]);
    }

    return 0;
}