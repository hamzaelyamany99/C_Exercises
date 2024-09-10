#include <stdio.h>

int main() {
    char str[1000];
    int i;

    printf("Enter a sentence:");
    scanf("%s", str);
    
    i = 0;
    while(str[i] != '\0'){
        i++;
        }
    printf("the length is:%d", i);
    return 0;
}