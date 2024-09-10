#include <stdio.h>

int main() {
   int i;
   int e;
   int max;
   
   printf("enter elements:");
   scanf("%d", &e);
   
   int T[e];
    
    for(i=0; i<e; i++){
    printf("Element %d:\n", i+1);
    scanf("%d", &T[i]);
    }
    
    for (i=0; i<e; i++)
    {   
        if(T[i] > T[i+1]){
            max = T[i];
            T[i+1] = T[i];
            T[i] = max;
        }
    }
    printf("the max is %d:",max);


    return 0;
}