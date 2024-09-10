#include <stdio.h>

int verpar() {
    int n;

    printf("Enter a number:\n");
    scanf("%d", &n);

    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n = verpar();
    printf("Result: %d\n", n);
}