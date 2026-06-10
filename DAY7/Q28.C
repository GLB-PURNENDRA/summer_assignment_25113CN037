#include <stdio.h>

// Recursive function to reverse a number
void reverseNumber(int n, int *rev) {
    if (n == 0)
        return;

    *rev = (*rev * 10) + (n % 10);
    reverseNumber(n / 10, rev);
}

int main() {
    int num, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    reverseNumber(num, &rev);

    printf("Reversed number = %d\n", rev);

    return 0;
}