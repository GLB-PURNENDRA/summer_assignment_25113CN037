// Write a program to find nth fibonacci term
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("The %dst Fibonacci term is %d", n, a);
    }
    else if (n == 2) {
        printf("The %dnd Fibonacci term is %d", n, b);
    }
    else {
        for (int i = 3; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        printf("The %dth Fibonacci term is %d", n, b);
    }

    return 0;
}
